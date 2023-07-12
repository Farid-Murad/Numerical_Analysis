#include <bits/stdc++.h>

#define f(x) cos(x) - 3 * x + 1

#define g(x) (1 + cos(x)) / 3

using namespace std;

int main()
{
    int step = 1, N = 1000;
    double x1, x0 = 3.2;
    double error = 0.00001;
    do
    {
        x1 = g(x0);
        cout << "Iteration-" << step << ":\t x1 = " << setw(10) << x1 << " and f(x1) = " << setw(10) << f(x1) << endl;

        step = step + 1;

        if (step > N)
        {
            cout << "Not Convergent.";
            break;
        }

        x0 = x1;

    } while (abs(f(x1)) > error);

    cout << endl
         << "Root is " << x1;

    return (0);
}

#include <bits/stdc++.h>

#define f(x) cos(x) - 3 * x + 1

#define g(x) (1 + cos(x)) / 3

using namespace std;

int main()
{
    int step = 1, N = 1000;
    double x1, x0 = 3.2;
    double error = 0.00001;
    do
    {
        x1 = g(x0);
        cout << "Iteration-" << step << ":\t x1 = " << setw(10) << x1 << " and f(x1) = " << setw(10) << f(x1) << endl;

        step = step + 1;

        if (step > N)
        {
            cout << "Not Convergent.";
            break;
        }

        x0 = x1;

    } while (abs(f(x1)) > error);

    cout << endl
         << "Root is " << x1;

    return (0);
}