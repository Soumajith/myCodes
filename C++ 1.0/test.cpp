#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool check = false;

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (j < 3)
        {
            if (arr[i][j] == 7)
            {
                cout << "Yes"<<endl;
                check = true;
                break;
            }
            j++;
        }
        if (check == false)
        {
            cout<<"No"<<endl;
        }
        
    }

    return 0;
}