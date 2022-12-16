#include<iostream>
using namespace std;

void solve(int n, int s, int h, int d, int &count){
    count++;
    if(n==1){
        cout<<"moving "+to_string(n)+" from "+to_string(s)+" to "+to_string(d)<<endl;
        return;
    }
    solve(n-1,s,d,h,count);
    cout<<"moving "+to_string(n)+" from "+to_string(s)+" to "+to_string(d)<<endl;
    solve(n-1,h,s,d,count);
}

int main()
{
    int n;
    int count=0,s=1,d=3,h=2;
    cin>>n;
    solve(n,s,h,d,count);
    cout<<count;
    return 0;
}