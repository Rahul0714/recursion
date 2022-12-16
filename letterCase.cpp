#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op){
    if(ip.length()==0){
        cout<<op<<" ";
        return;
    }
    if(ip[0]>=48 && ip[0]<=58){
        op+=ip[0];
        ip.erase(ip.begin()+0);
        solve(ip,op);
    }
    else{
        string op1=op;
        string op2=op;
        op1+= toupper(ip[0]);
        op2+= tolower(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1);
        solve(ip,op2);
    }
}

int main()
{
    string ip="a2b3";
    solve(ip,"");
    return 0;
}