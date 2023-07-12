#include <bits/stdc++.h>
using namespace std;
#define db double
#define ll long long
#define eps 0.01
double fun(db x)
{
    return x * x * x - x * x - 1;
}
void bisection(db a, db b)
{
    if (fun(a) * fun(b) >= 0)
    {
        cout << "Error" << endl;
        return;
    }
    db c = a;
    while ((b - a) > eps)
    {
        c = (a + b) / 2;
        if (fun(c) == 0)
        {
            break;
        }
        else if (fun(a) * fun(b) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The root value is = " << c << endl;
}
int main()
{
    db a, b;
    cin >> a >> b;
    bisection(a, b);
    return 0;
}