/*
Code for 16 bit Tail_Biting Convolutional Encoding
Octal Values: 133,171,165
Date: 15/05/2017
Author: Sarvesh Hire
*/

#include <stdio.h>
#include <string.h> 
#include <math.h>

int bin_arr[3][7];
int j = 6 , p=0, rate = 3 ;
int s[4] ;
int crc_output[]= {0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0} , shift_reg[7] = {0,0,0,0,0,0,0};
int output[3][7];
int ones[3][7];
int main()

{
	//begin code for octal to bin
	void sym_out() ;
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long  binary1, place = 1 ,k = 1000000;
    int i = 0,m = 1,n = 0,rem = 0;
    int q = 6 ;
	long long tempOctal[3] = {133,171,165}, binary[3] = {0,0,0} ;
    
	for(i=0 ; i<3 ; i++ )
   {
	   place = 1 ;
    while(tempOctal[i] > 0)
    {
        rem = tempOctal[i] % 10;
        binary[i] = (OCTALVALUES[rem] * place) +  binary[i];
        tempOctal[i] /= 10;
        place *= 1000;
    }
}
   for ( p = 0; p < 3 ; p++) 
   {
	   k = 1000000;
	for(i=0 ; i<7 ; i++ )
	{
		  binary1 = binary[p]/k;
		  k = k/10 ;
		  binary1=binary1%10 ;
		  bin_arr[p][i] = binary1 ;
	}
}
   //octal to bin ends


   //begin til biting encoding

   /*
   Algorithm:
   Given a bit stream of n bits, the last 6 bits are being placed inn the shift registers and the first
   bit of the bit stream enters the first shift registers.
   Let the rate be n which in our case is 3. So we will get n number of symbols per iteration depending on 
   the n generator polynomials. After each iteration shift bits from one register to other and add them using xor 
   operation and keep on iterating untill all shift registers turn 0.
   */

   /*Shift last 6 bits into bit arrays*/

   i = 0 ;
   n = sizeof(crc_output)/4 ;
    
   for( i = n-1 ; i > n-6 ; i-- )
   {
	  shift_reg[m] = crc_output[i] ;
	  m++ ;
   }
   shift_reg[0] = crc_output[i];
   sym_out() ;
 printf("%d\n\n", s[1]);
   i = 0 ;

   for ( i = 1 ; i < n ; i++ )
   {  
   for( q = 6 ; q >=0  ; q-- )
   {
	   shift_reg[q] = shift_reg[q-1] ;
   }
   shift_reg[0] = crc_output[i];

  // sym_out() ;
   }

    return 0;
} 

void sym_out(void)
{
	int i = 0, k = 0, n = 0 , m = 0 ;
	

	for( i = 0 ; i< 3 ; i++)
	{
		s[i] = n-1 ;
		n=0;
		for ( k = 0 ; k < 7 ; k++ )
		{
			if(bin_arr[i][k] == 1)
			{
				ones[i][n] = k ;
				n++;
			}
		}
	}

	


 


}