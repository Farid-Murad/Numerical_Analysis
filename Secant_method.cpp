#include<bits/stdc++.h>
 using namespace std;
 #define epsilion 0.01
 double f(double x) 
{
    double d=x*3.1416/180;
    return 3*x-cos(d)-1;
 }
 void seacent(double xl,double xu)
 {
     if(f(xu)*f(xl)>=0)
    {
         cout<<"incorrect a and b"<<endl;
         return;
    }
    double xr=0;
    // cout<<"error is :"<<(abs(xu-xl)/xu)<<endl;
    while(fabs(xu-xl)>=0.01){
        xr=xu-((f(xu)*(xl-xu))/(f(xl)-f(xu)));
        if(f(xr)==0)
        break;
        xl=xu;
        xu=xr;
    //  cout<<"error is :"<<(abs(xu-xl)/xu)<<endl;
    }
     cout<<"root is "<<xr<<endl;
 }
 int main()
 {
    double a=0;
   double b=1;
    seacent(a,b);
 }