#include<iostream>
#include<cmath>
#include<simplecpp>

using namespace std;


int graphplotter(double range );
double updatcoordinate(double x, double y, double x1, double y1, int function);
int somefunction(int button);


int main()

{

    char choice = '0';
    cout<<"Welcome."<<endl;
    cout<<"Press 1 to use normal graph plotter  "<<endl;
    cout<<"Press 2 to  quadratic equation solver and cubic equation solver   "<<endl;
    cout<<"Press 3 to exit   "<<endl;
    cin>>choice;
    if(choice=='1')


    {
        double range;
        cout<<"You have chosen Graph Plotter."<<endl;
        cout<<"Please input range of x."<<endl;
        cin>>range;


        graphplotter(range);//takes required range and maps it to a canvas of fixed size
        return 0;


    }
    if(choice=='2')
    {
        cout << "press 4 for quadratic equation solver\n";
        cout << "press 5 for cubic equation solver/n";
        cin>> choice;
        if(choice=='4')
        {
            double a ;
            cout<<"enter the value of a"<<endl;
            cin>>a;

            double b;

            cout<<"enter the value of b"<<endl;
            cin>>b;


            double c;
            cout<<"enter the value of c"<<endl;
            cin>>c;
            double r1, r2, determinant, realPartOfRoot, imaginaryPartOfRoot;
            if (determinant == 0)
            {
                cout << "\nRoots Are Real And Equal." << endl;
                r1 = (-b) / (2*a);
                cout << "Root1 = Root2 =" << r1 << endl;
            }

            else if (determinant > 0)
            {
                r1 = (-b + sqrt(determinant)) / (2*a);
                r2 = (-b - sqrt(determinant)) / (2*a);
                cout << "\nRoots Are Real And Different." << endl;
                cout << "Root1 = " << r1 << endl;
                cout << "Root2 = " << r2 << endl;
            }

            else
            {
                realPartOfRoot = -b /(2*a);
                imaginaryPartOfRoot =sqrt(-determinant)/(2*a);
                cout << "\nRoots are complex and different. "  << endl;
                cout << "Root1 = " << realPartOfRoot << " + " << imaginaryPartOfRoot << " i" << endl;
                cout << "Root2 = " << realPartOfRoot << " - " << imaginaryPartOfRoot << " i" << endl;
            }






        }
        if(choice=='5')
        {
            double a;
            cout<<"enter the value of a"<<endl;
            cin>>a;


            double b;
            cout<<"enter the value of b"<<endl;
            cin>>b;


            double c;
            cout<<"enter the value of c"<<endl;
            cin>>c;


            double d;
            cout<<"enter the value of d"<<endl;
            cin>>d;


            //a,b,c,d are the coefficients of the cubic equation
            double x,y,z;
            double i, j, k, l, m, n, p;
            double r, s, t, u;
            double r1, r2, r2re, r2im, r3re, r3im, r3;

            cout<<"For the cubic equation is ax^3 + bx^2 + cx + d =0 \n";

            cout << "\nCUBIC EQ---------------------------UATION : " << a << " x^3 + " << b << " x^2 + " << c <<" x + " << d << " = 0" << endl;

            x = ((3*c/a)-((b*b)/(a*a)))/3;                            // z is the Discriminant of the cubic equation.
            y = ((2*(b*b*b)/(a*a*a))-(9*b*c/(a*a))+(27*d/a))/27;      // z is equal to 18abcd - 4b^3d + b^2c^2 - 4ac^3 -27a^2d^2.
            z = ((y*y)/4)+((x*x*x)/27);
            if(b==0&&c==0&&d==0)
            {
                cout<<"\nHAS ALL THREE ROOTS REAL AND SAME\n";
                cout<<"ROOT_1 = "<<0<<endl;
                cout<<"ROOT_2 = "<<0<<endl;
                cout<<"ROOT_3 = "<<0<<endl;

            }
            else
            {

                if(c==0&&d==0)
                {
                    cout<<"\nHAS THREE REAL ROOTS OUT OF WHICH TWO ARE SAME\n";
                    cout<<"ROOT_1 = "<<(-b)/a<<endl;
                    cout<<"ROOT_2 = "<<0<<endl;
                    cout<<"ROOT_3 = "<<0<<endl;
                }

                else if(b==0&&d==0)
                {
                    if(c<0)
                    {


                        cout<<"\nHAS THREE REAL DIFFERENT ROOTS\n";
                        cout<<"ROOT_1 = "<<pow((-c)/a,0.5)<<endl;
                        cout<<"ROOT_2 = "<<-pow((-c)/a,0.5)<<endl;
                        cout<<"ROOT_3 = "<<"0"<<endl;
                    }

                    else
                    {
                        cout<<"\nHAS ONE REAL ROOT\n";
                        cout<<"ROOT_1 = "<<pow((c)/a,0.5)<<" i "<<endl;
                        cout<<"ROOT_2 = "<<-pow((c)/a,0.5)<<" i "<<endl;
                        cout<<"ROOT_3 = "<<0<<endl;
                    }
                }


                else
                {
                    if(x==0 && y==0 && z==0)      // all roots are real and equal
                    {
                        r1 = (-b/(3*a));
                        r2 = (-b/(3*a));
                        r3 = (-b/(3*a));
                        cout<<"\nHAS ALL THE ROOTS ARE REAL AND EQUAL\n";
                        cout << "ROOT_1 = " << r1 << endl;
                        cout << "ROOT_2 = " << r2 << endl;
                        cout << "ROOT_3 = " << r3 << endl;
                    }
                    else if(z<=0)
                    {
                        // all 3 roots are real
                        i = pow((((y*y)/4)-z),0.5);  // Finding the roots of the equation using trigonometric and hyperbolic method
                        j = pow(i,0.33333333333333333333333333);              // This method is on http://en.wikipedia.org/wiki/Cubic_function
                        k = acos((y/(2*i))*-1);
                        l = j * -1;
                        m = cos(k/3);
                        n = sqrt(3) * sin(k/3);
                        p = (b/(3*a))*-1;
                        r1 = (2*j)*m-(b/(3*a));
                        cout<<"HAS ALL THE ROOTS ARE REAL\n";
                        cout << "ROOT_1 = " << r1 << endl;
                        r2 = l * (m+n) + p;
                        cout << "ROOT_2 = " << r2 << endl;
                        r3 = l * (m-n) + p;
                        cout << "ROOT_3 = " << r3 << endl;
                    }
                    else if(z>0)
                    {
                        if(b!=0||c!=0) // only 1 root is real
                        {
                            r = ((y/2)*-1)+pow(z,0.5);
                            double a1;
                            if(r<0)
                            {
                                a1=-1.0*r;
                                s=pow(a1,0.333333333333333333333333333333333);
                                s=-1.0*s;
                            }
                            else
                            {
                                s = pow(r,0.3333333333333333333333333);
                            }
                            double a2;

                            t = ((y/2)*-1)-pow(z,0.5);
                            if(t<0)
                            {
                                a2=-1.0*t;
                                u=pow(a2,0.333333333333333333333333333333);
                                u=-1.0*u;
                            }
                            else
                            {
                                u = pow((t),0.3333333333333333333333333333);
                            }
                            cout<<"\nHAS ONLY ONE REAL ROOT\n";
                            r1 = (s+u) - (b/(3*a));
                            cout << "ROOT_1 = " << r1 << endl;
                            r2re = (((s+u)*-1)/2) - (b/(3*a));
                            r2im = -(s-u)*pow(3,0.5)/2;
                            cout << "ROOT_2 = " << r2re << " - "<< -r2im << " i" << endl; //This roots is imaginary and hence has an i in it which represents the square root of -1
                            r3re = (((s+u)*-1)/2) - (b/(3*a));
                            r3im = (s-u)*pow(3,0.5)/2;
                            cout << "ROOT_3 = " << r3re << " + " << r3im << " i" << endl; //This roots is imaginary and hence has an i in it which represents the square root of -1
                        }
                        else if(b==0&&c==0&&d<0)
                        {
                            cout<<"ROOT_1 = "<< pow((-d)/a,0.333333333333333333333)<<endl;
                            cout<<"ROOT_2 = "<< (-0.5)*pow((-d)/a,0.33333333333333333333333333333)<<" - "<<0.86602*pow((-d)/a,0.333333333333333333333333333333333)<<" i "<<endl;
                            cout<<"ROOT_3 = "<< (-0.5)*pow((-d)/a,0.33333333333333333333333333)<<" + "<<0.86602*pow((-d)/a,0.333333333333333333333333333333333)<<" i "<<endl;
                        }
                    }
                }

            }
        }
    }
    if(choice=='3')
    {
        return 0;
    }

    return 0;

}
int graphplotter(double range)
{
    int i = 0, function;
    double y[500], x[500],xactual[500], yactual[500];
    //x and y are values in y = f(x), xreal and yreal are corresponding coordinates
    //each element of the arrays is one pixel apart from the next along corresponding axis
    repeat(251)
    {//initializing values of y and x for given range over a 500*500 graph
        x[250+i] = (range*i)/250;
        y[250+i] = (range*i)/250;
        x[250-i] = -(range*i)/250;
        y[250-i] = -(range*i)/250;
        i++;
    }
    i=0;
    repeat(500)
    {
        xactual[i] = 500+i;
        yactual[i] = 250-y[i]*250/range;
        i++;
    }//mapping to real coordinates
    initCanvas("2D Graph Plotter", 1000, 500);
    Line divider(500,0,500,500);
    Line yaxis(750, 0, 750, 500);
    Line xaxis(500, 250, 1000, 250);
    Text T(250, 250, "Loading...");

    Line graph[599];//array of lines for each pixel width
Text T3(758, 240, "O");
T.reset(250, 12.5, "Press the buttons for desired functions.");
Text T2(250, 30, "Please observe correct order.");
Rectangle sin1(62.5, 87.5, 125, 75);
Rectangle asin2(187.5, 87.5, 125, 75);
Rectangle cos3(312.5, 87.5, 125, 75);
Rectangle acos4(437.5, 87.5, 125, 75);
Rectangle sec5(62.5, 162.5, 125, 75);
Rectangle cosec6(187.5, 162.5, 125, 75);
Rectangle tan7(312.5, 162.5, 125, 75);
Rectangle cot8(437.5,162.5, 125, 75);
Rectangle dividebyx9(62.5, 237.5, 125, 75);
Rectangle differentiate10(187.5, 237.5, 125, 75);
Rectangle mod11(312.5,237.5,125, 75);
Rectangle sgnx12(437.5, 237.5, 125, 75);
Rectangle reciprocal13(62.5, 312.5, 125, 75);
Rectangle ln14(187.5, 312.5, 125, 75);
Rectangle exp15(312.5, 312.5, 125, 75);
Rectangle negative16(437.5, 312.5, 125, 75);
Rectangle multiplybyx17(62.5, 387.5, 125, 75);
Rectangle multiplybyy18(187.5, 387.5, 125, 75 );
Rectangle squareroot19(312.5, 387.5, 125, 75);
Rectangle done20(407.5,387.5, 62.5, 75);
Rectangle clear22(62.5, 462.5, 125, 75);
Rectangle shiftdown23(187.5, 462.5, 125, 75 );
Rectangle shiftup24(312.5, 462.5, 125, 75);
Rectangle intpart25(437.5, 462.5, 125, 75);

Text sin2(62.5, 87.5, "sin");
Text asin02(187.5, 87.5, "asin");
Text cos2(312.5, 87.5, "cos");
Text acos2(437.5, 87.5, "acos");
Text sec2( 62.5, 162.5,"sec" );
Text asec2( 187.5, 162.5,"cosec");
Text cosec2(312.5, 162.5, "tan");
Text acosec2(437.5,162.5, "cot");
Text tan2(62.5, 237.5, "y/x" );
Text atan2(187.5, 237.5, "dy/dx");
Text cot2(312.5,237.5, "|y|");
Text acot2(437.5, 237.5, "sgn(y)");
Text reciprocal2(62.5, 312.5, "Reciprocal");
Text ln2(187.5, 312.5, "ln");
Text exp2(312.5, 312.5, "e^");
Text negative2(437.5, 312.5,"*(-1)");
Text multiplybyx2(62.5, 387.5, "*x");
Text multiplybyy2(187.5, 387.5, "*y");
Text squareroot1(312.5, 387.5, "squareroot");
Text done2(407.5, 387.5, "Draw");
Text polynomial(462.5,387.5, "Poly");
Text clear(62.5, 462.5,"y=x");
Text shiftdown1(187.5, 462.5, "y--");
Text shiftup2(312.5, 462.5, "y++");
Text intpart1(437.5, 462.5, "EXIT");
while(function!=24)
{while(true)
{
    function = somefunction(getClick());
    if((function==20)||(function==24)){break;}//exits
    T.reset(250, 12.5, "Please wait.");
    T2.reset(250, 37.5,  " ");//shows time taken for coordinate update and prevents overspeed
    i=0;
    repeat(500)
    {
        y[i] = updatcoordinate(x[i], y[i], x[i+1], y[i+1], function);//updates yvalue
        i++;
    }
    T.reset(250, 12.5, "Click on the options below to make your function.");
    T2.reset(250, 37.5,  "Use an appropriate order");
}
T.reset(250, 12.5, "Graph is being drawn.");
T2.reset(250, 37.5,  "Please wait for the graph to be plotted.");//indicates waiting time
i=0;
if(function==24){break;}
    repeat(500)
    {
        xactual[i] = 500+i;
        yactual[i] = 250-y[i]*250/range;//updates acual coordinates
        i++;
    }
    for(i=0;i<499;i++)
    {
        graph[i].reset(xactual[i], yactual[i], xactual[i+1], yactual[i+1]);//draws graph
    }
T.reset(250, 12.5, "Graph has been drawn.");
    T2.reset(250, 37.5,  "Press further buttons to modify function or EXIT to leave");//provides exit route

}

return 0;
}
int somefunction(int button)
{//detects which button is pressed and outputs corresponding function
    int x, y, function;
    x = button/65536;
    y = button%65536;

    if((y>=62.5)&&(y<=125))
    {
      if((x>=0)&&(x<=125))
      {
        function = 1;
      }
      if((x>=125)&&(x<=250))
      {
          function = 2;
      }
      if((x>=250)&&(x<=375))
      {
         function = 3;
      }
      if((x>=375)&&(x<=500))
      {
         function = 4;
      }
    }
    if((y>=125)&&(y<=250))
    {
      if((x>=0)&&(x<=125))
      {
          function = 5;
      }
      if((x>=125)&&(x<=250))
      {
        function = 6;
      }
      if((x>=250)&&(x<=375))
      {
         function = 7;
      }
      if((x>=375)&&(x<=500))
      {
         function = 8;
      }
    }
    if((y>=200)&&(y<=275))
    {
      if((x>=0)&&(x<=125))
      {
         function = 9;
      }
      if((x>=125)&&(x<=250))
      {
         function = 10;
      }
      if((x>=250)&&(x<=375))
      {
         function = 11;
      }
      if((x>=375)&&(x<=500))
      {
         function = 12;
      }
    }
    if((y>=275)&&(y<=350))
    {
      if((x>=0)&&(x<=125))
      {
          function = 13;
      }
      if((x>=125)&&(x<=250))
      {
          function = 14;
      }
      if((x>=250)&&(x<=375))
      {
          function = 15;
      }
      if((x>=375)&&(x<=500))
      {
          function = 16;
      }
    }
    if((y>=350)&&(y<=425))
    {
       if((x>=0)&&(x<=125))
      {
         function = 17;
      }
      if((x>=125)&&(x<=250))
      {
         function = 18;
      }
      if((x>=250)&&(x<=375))
      {
         function = 19;
      }
      if((x>=375)&&(x<=437.5))
      {
         function = 20;
      }
    if((x>=437.5)&&(x<=500))
      {
         function = 25;
      }
    }


    if((y>=425)&&(y<=500))
    {
       if((x>=0)&&(x<=125))
      {
         function = 21;
      }
      if((x>=125)&&(x<=250))
      {
         function = 22;
      }
      if((x>=250)&&(x<=375))
      {
         function = 23;
      }
      if((x>=375)&&(x<=437.5))
      {
         function = 24;
      }
    }
    return function;
}
double updatcoordinate(double x, double y, double x1, double y1, int function)

{
    double yout;
    switch(function)
    {//simply updates value of y based on selected function
        case 1:yout = sin(y);break;
        case 2:yout = asin(y);break;
        case 3:yout = cos(y);break;
        case 4:yout = acos(y);break;
        case 5:yout = 1/cos(y);break;
        case 6:yout = 1/sin(y);break;
        case 7:yout = tan(y);break;
        case 8:yout = 1/tan(y);break;
        case 9:yout = y/x;break;
        case 10:yout = (y1-y)/(x1-x);break;//Differentiation
        case 11:if(y>=0){yout = y;break;}else{yout = -y;break;}
        case 12:if(y>0){yout=1;break;}else if(y<0){yout = -1;break;}else if(y=0){yout = 0;break;}
        case 13:yout = 1/y;break;
        case 14:yout = log(y);break;
        case 15:yout = exp(y);break;
        case 16:yout = -y;break;
        case 17:yout = y*x;break;
        case 18:yout = y*y;break;
        case 19:yout = sqrt(y);break;
        case 21:yout = x;break;
        case 22:yout = y-1;break;
        case 23:yout = y+1;break;
        case 25:yout = 1*x*x+x+1;break;

    }
    return yout;
}


