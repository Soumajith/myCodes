#include <bits/stdc++.h>

using namespace std;
class account
{
    public:
    int account_number;
    int pin;
    int account_balance;
    string name;
    int withdraw(int bal); //declare
    
};

int account :: withdraw(int bal)
{
    int amt;
    cout<<"\nPlease the the ammount to be withdrawn : ";
    cin>>amt;
    if(amt<=bal)
    {bal =bal-amt;}
    else
    {cout<<"\nSorry Not Possible to withdraw";}
    cout<<"\nAmount is successfully withdrawn...";
    cout<<"\nCurrent balance:"<<obj.account_balance;
    return bal;
}

int main()
{
    system("cls");
    account obj;
    //account obj;
    obj.account_number=13514;
    obj.pin=2364;
    obj.account_balance=50000;
    obj.name="Ram";
    int option;
    cout<<"\n1. Press 1 to Create an Account\n2. Press 2 to Deposit Money\n3. Press 3 to Withdraw Money\n4. Press 4 to Transfer Money \n5. Press 5 to Check Balance\n6. Press 6 to change pin code\n7. Press 7 to exit\n\n";
    cin>>option;
    switch(option)
    {
        case 1:
            break;

        case 2:
            break;
        
        case 3:
            obj.account_balance=obj.withdraw(obj.account_balance);
            break;
            
        case 4:
            break;

        case 5:
            break;

        case 6:
            break;
            
        case 7:
            exit;
        
        default:
            exit;    
    }
    return 0;
}