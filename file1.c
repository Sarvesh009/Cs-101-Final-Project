#include <stdio.h>
#include <string.h>

#define poly     0x1021          /* crc-ccitt mask */
#define A 10
#define B 11
#define C 12
#define D 13
#define E 14
#define F 15

/* global variables */
char text[4];
unsigned short good_crc;
unsigned short bad_crc;
unsigned short text_length;
char display[4];
int n = 0 ;

int main(void)
{
    int i,j =0;
    void go();
    int hex[8]={F,F,F,F,0,0,0,0} ;
    n = sizeof(hex)/4 ;
    for(i=1 ; i < n ; i ++  )
    {
    if(i%2 != 0)
    {
     display[j] = 16*hex[i-1] + hex[i] ;
     j++;
        }
    }

     int k = 0;
    for( k =0 ; k < 5 ; k++)
    {
    text[k] = display [k] ;
    }

   // printf("%c", text[1]);
    go();
    return 0;
}

void go(void)
{
    void update_good_crc(unsigned short);
    void augment_message_for_good_crc();

    unsigned short ch, i;

    good_crc = 0x0000;

    i = 0;
    text_length= 0;
    while((ch=text[i])!=0)
    {
        update_good_crc(ch);
        i++;
        text_length++;
    }
    augment_message_for_good_crc();

    printf("good_CRC = %04X", good_crc ) ;

}


void update_good_crc(unsigned short ch)
{
    unsigned short i, v, xor_flag;


    v = 0x80;

    for (i=0; i<8; i++)
    {
        if (good_crc & 0x8000)
        {
            xor_flag= 1;
        }
        else
        {
            xor_flag= 0;
        }
        good_crc = good_crc << 1;

        if (ch & v)
        {
            /*
            Append next bit of message to end of CRC if it is not zero.
            The zero bit placed there by the shift above need not be
            changed if the next bit of the message is zero.
            */
            good_crc= good_crc + 1;
        }

        if (xor_flag)
        {
            good_crc = good_crc ^ poly;
        }

        /*
        Align test bit with next bit of the message byte.
        */
        v = v >> 1;
    }
}

void augment_message_for_good_crc()
{
    unsigned short i, xor_flag;

    for (i=0; i<16; i++)
    {
        if (good_crc & 0x8000)
        {
            xor_flag= 1;
        }
        else
        {
            xor_flag= 0;
        }
        good_crc = good_crc << 1;

        if (xor_flag)
        {
            good_crc = good_crc ^ poly;
        }
    }
}

