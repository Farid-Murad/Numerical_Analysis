#include <bits/stdc++.h>
using namespace std;
#define epsilion 0.01
double func(double x)
{
   double d = x * 3.1416 / 180;
   return 3 * x - cos(d) - 1;
}
double derivate(double x)
{
   double d = (x * 3.1416) / 180;
   return 3 + sin(d);
}
double dd(double x)
{
   double d = (x * 3.1416) / 180;
   return cos(d);
}
void modifiednewton(double xl, double xu)
{
   if (func(xu) * func(xl) >= 0)
   {
      cout << "incorrect a and b" << endl;
      return;
   }
   double xr = 0;
   while (abs((func(xl) * derivate(xl)) / (derivate(xl) * derivate(xl) - dd(xl) * func(xl))) >= 0.01)
   {
      xr = xl - (func(xl) * derivate(xl)) / (derivate(xl) * derivate(xl) - dd(xl) * func(xl));
      cout << "error is : " << (abs(xr - xl) / xr) * 100 << endl;
      xl = xr;
   }
   cout << "root is :" << xr << endl;
}
int main()
{
   double a = 0;
   double b = 1;
   modifiednewton(a, b);
}