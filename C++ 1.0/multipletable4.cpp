#include <iostream>
using namespace std;
int main()
{
    char ch;
    int rows,col,arr[100][100],i,j;
do{
    cout<<"Enter no. of rows : ";
    cin>>rows;
    cout<<"Enter no. of columns : ";
    cin>>col;
    for(i=0;i<=rows;i++)
    {
        for(j=0;j<=col;j++)
        {
            if((i*j)==0)
            {
                arr[i][j]=i+j;
            }
            else
            {
                arr[i][j]=i*j;
            }
            cout<<arr[i][j]<<"  ";
        }
        cout<<"\n";
    }
    cout<<"\n\n\n";
    cout<<"Do you want to generate another? ";
    cin>>ch;
  }while(ch=='Y'||ch=='y');
    cout<<"Thank you! Come again!";
    return 0;
}3
