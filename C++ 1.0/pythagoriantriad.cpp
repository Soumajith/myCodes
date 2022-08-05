#include <iostream>
#include <cmath>
using namespace std;
bool check(int a, int b, int c)
{
    bool r;
    if (a > b)
    {
        if (a > c)
        {
            if (a * a == b * b + c * c)
            {
                r = true;
            }
            else
            {
                r = false;
            }
        }
        else
        {
            if ((c * c) == (a * a) + b * b)
            {
                r = true;
            }
            else
            {
                r = false;
            }
        }
    }
    else
    {
        if (b > c)
        {
            if ((b * b) == (c * c) + a * a)
            {
                r = true;
            }
            else
            {
                r = false;
            }
        }
        else
        {
            if ((c * c) == (a * a) + b * b)
            {
                r = true;
            }
            else
            {
                r = false;
            }
        }
    }
    return r;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    bool res = true;
    if (res == check(x, y, z))
    {
        cout << "its is triad" << endl;
    }
    else
    {
        cout << "it is not" << endl;
    }
    return 0;
}
