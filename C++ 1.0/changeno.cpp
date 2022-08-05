#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int BinaryToDecimal(int m)
{
    int j;
    int i = 0;
    int sum = 0;
    while (m > 0)
    {
        j = m % 10;
        sum += j * pow(2, i);
        m = m / 10;
        i += 1;
    }
    return sum;
}
int OctalToDecimal(int m)
{
    int j;
    int i = 0;
    int sum = 0;
    while (m > 0)
    {
        j = m % 10;
        sum += j * pow(8, i);
        m = m / 10;
        i += 1;
    }
    return sum;
}

int HexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= 0 && n[i] <= 9)
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}
int DecimalToBinary(int n)
{
    int ans = 0;
    int x = 1;

    while (x <= n)

    x *= 2;
    x /= 2;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}

int DecimalToOctal(int n)
{
    int ans = 0;
    int x = 1;

    while (x <= n)

        x *= 8;
    x /= 8;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 8;
        ans = ans * 10 + lastDigit;
    }

    return ans;
}
string DecimalToHexadecimal(int n)
{
    string ans = "";
    int x = 1;

    while (x <= n)

        x *= 16;
        x /= 16;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 16;
        if (lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << "Binary " << BinaryToDecimal(n) << endl;
    // cout << "octal " << OctalToDecimal(n) << endl;
    // cout << "DecBI " << DecimalToBinary(n) << endl;
    // cout <<"DectoHex "<<DecimalToHexadecimal(n)<<endl;
    // string k;
    // cout << "Hexadecimal" << endl;
    // cin >> k;
    // cout << HexadecimalToDecimal(k) << endl;
    return 0;
}