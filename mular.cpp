#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
    return x*x*x-13*x-12;
}
void muller(double x0,double x1,double x2)
{
   double x3 = 0;
   double h0=x1-x0;
   double h1=x2-x1;
   double p0=(func(x1)-func(x0))/(x1-x0);
   double p1=(func(x2)-func(x1))/(x2-x1);
   double a = (p1-p0)/(h0+h1);
   double b = a*h1+p1;
   double c = func(x2);
   double v0 = b+sqrt(b*b - 4*c*a);
   double v1 = b-sqrt(b*b - 4*c*a);
   if(v0>v1)
   v1=v0;
   x3 = x2 + (-2*c)/v1;
   cout<<"error is :"<<(abs(x3-x2)/x3)*100<<endl;
   x0=x1;
   x1=x2;
   x2=x3;
   cout<<"root is :"<<endl;
   cout<<"x0: "<<x0<<" "<<"x1: "<<x1<<" "<<"x2: "<<x2<<endl;
}
int main()
{
    double x0=4.5,x1=5.5,x2=5;
    muller(x0,x1,x2);
}