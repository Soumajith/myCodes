#include <bits/stdc++.h>
using namespace std;

int i = 0;
class account
{
public:
    int acc_no=11012,pin,bal;                                                   //        i=  1   2   3
    string name;                                                                //  AC NO[] : []  []  [] 
                                                                                //  PIN[] :   []  []  []
                                                                                //  BAL[]:    []  []  []
    // void create()
    // {
    //     cout << "Enter your Name:"<<endl;
    //     cin.ignore();
    //     getline(cin,name);
    //     acc_gen();
    //     cout<<"\nEnter the PIN CODE : ";
    //     cin>>pin;
    //     cout<<"\nEnter the amount to be deposited : "; 
    //     cin>>bal;
    // }
    
    void dep()
    {
        cout<<"Enter your account number: ";
       // cin>>acc_no;
        cout<<"Enter the amount to deposit : ";
        int d;
        cin>>d;
        bal += d;
        cout<<"\nYou have succesfully deposited "<<d<<" amount"<<endl;
        cout<<"\n\nCURRENT BALANCE : "<<bal;
    }
    void withdraw()
    {
        cout<<"Enter the withdrawal amount : ";
        int w=0;
        cin>>w;
        if(w>bal)
        {
            cout<<"You don't have enough balance!!!";
        }
        else
        {
            bal -= w;
            cout<<"\nYou have succesfully withdrawn "<<w<<" rupees."<<endl;
            cout<<"\n\nCURRENT BALANCE : "<<bal;
        }
    }
    void money_trans()
    {
        
        int trans_acc;
        cout<<"Enter the account number of Recipient\n";
        cin>>trans_acc;
        cout<<"Enter the Transferable amount\n";
        int t;
        cin>>t;
        if(t>bal){
            cout<<"You don't have enough balance!!!";
        }
        else
        {
            bal -= t;
            cout<<"You have succesfully transferred "<<t<<" rupees to "<<trans_acc<<endl;
            cout<<"\n\nCURRENT BALANCE : "<<bal;
        }
    }
    void chk_bal()
    {
        cout<<"Enter your account number:";
        cin>>acc_no;
        //kvsjkcdn
        cout<<"\n\nCURRENT BALANCE : "<<bal;
    }
    void pin_change()
    {
        cout<<"Account: pin:";
        // cin>>acc_no;
        cin>>pin;
        //skaba
        cout<<"Enter the new PIN CODE : ";
        cin>>pin;
    }
    // int security(){
    //     cout<<"Enter the account no. : ";
    //     cin>>n;
    //     if(n == acc_no){
    //         cout<<"\nEnter the PIN : "
    //         cin<<p;
    //         if (p == pin)
    //         {
    //             return 1;
    //         }
    //         else
    //         {
    //             return 0;
    //         }
    //     }
    //     else
    //     {
    //         return 0;
    //     }
    // }
    
};


int main()
{   
    int i = 0;
    char ch='x';
    do{
    int n;
    system("cls");
    // int x;
    // cout<<"Enter the number of account holders : ";
    // cin>>x;
    account user[10];
    cout<<"==================WELCOME TO SAB KA BANK====================\n";
    cout<<"                [Can hold only 5 accounts]";
    cout<<"         What you want to do?\n";
    cout<<"         1. OPEN ACCOUNT\n";
    cout<<"         2. DEPOSIT MONEY\n";
    cout<<"         3. WITHDRAW MONEY\n";
    cout<<"         4. TRANSFER MONEY\n";
    cout<<"         5. CHECK BALANCE\n";
    cout<<"         6. CHANGE PIN CODE\n";
    cout<<"         7. EXIT\n";
    cout<<"\n\n\n(Please enter your choice(1-7)): ";
    cin>>n;
    switch (n)
    {
        case 1:
        cout << "Enter your Name:" <<endl;
        cin.ignore();
        getline(cin,user[i].name);
        user[i].acc_no++;
        cout << "Your account number is : "<<user[i].acc_no;
        
        cout<<"\nEnter the PIN CODE : ";
        cin>>user[i].pin;
        cout<<"\nEnter the amount to be deposited : "; 
        cin>>user[i].bal;
        i++;
        break;
    
        case 2:
        int p;
        cin>>p;

        for (int i = 0; i < 10; i++)
        {
            if (user[i].pin == p)
            {
                user[i].dep();
            }
        }
        break;

        case 3:
        int a;
        cin>>a;

        for (int i = 0; i < 10; i++)
        {
            if (user[i].pin == a)
            {
                user[i].withdraw();
            }
        }
        break;

        case 4:
        int c;
        cin>>c;

        for (int i = 0; i < 10; i++)
        {
            if (user[i].pin == c)
            {
                user[i].money_trans();
            }
        }
        break;
        
        case 5:
        int d;
        cin>>d;

        for (int i = 0; i < 10; i++)
        {
            if(user[i].acc_no =)
            if (user[i].pin == d)
            {
                user[i].chk_bal();
            }
        }
        
        break;
        
        case 6:
        int e;
        cin>>e;

        for (int i = 0; i < 10; i++)
        {
            if (user[i].pin == e)
            {
                user[i].pin_change();
            }
        }
        
        break;
        
        case 7:
        break;                       
        
        default:
        exit;
        }
        cout<<"\n\nThank you wanna try again, press Y or y\n";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
return 0;
}