
int combin(int j){
    int fact = 1;
    for (int i = 2; i <=j; i++)
    {
        fact*=i;
    }
    return fact;
}
    

int main(){
    int n, r;
    cin>>n>>r;
    int t = combin(n)/(combin(r)*combin(n-r));
    cout<<t;
    return 0;
}