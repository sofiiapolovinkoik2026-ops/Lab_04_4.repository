// Lab_04_4.cpp
// Половінко Софія 
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком.
// Варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R;
    double xp, xk, dx;
    double y;

    cout << "R  = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(12) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    double x = xp;
    while (x <= xk)
    {
        if (x < -R)
        {
            y = x + R;
        }
        else if (x <= 0)
        {
            y = sqrt(R * R - x * x);
        }
        else if (x <= 6)
        {
            y = R - (R / 6.0) * x;
        }
        else
        {
            y = x - 6;
        }

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(12) << setprecision(4) << y
             << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}