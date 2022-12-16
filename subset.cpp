#include<bits/stdc++.h>
using namespace std;

// void solve(string ip, string op){
//     if(ip.length()==0){
//         cout<<op<<" ";
//         return;
//     }
//     string op1=op;
//     string op2=op;
//     op2=op2+ip[0];
//     ip.erase(ip.begin()+0);
//     solve(ip,op1);
//     solve(ip,op2);
// }

void solve(int i, vector<char> &ip, vector<char> &op){
    if(i==ip.size()){
        for(auto i:op)
            cout<<i;
        cout<<endl;
        return;
    }
    op.push_back(ip[i]);
    solve(i+1,ip,op);
    op.pop_back();
    solve(i+1,ip,op);
}

int main()
{
    int n;
    cin>>n;
    vector<char> ip(n), op(n);
    for(int i=0;i<n;i++){
        cin>>ip[i];
    }
    solve(0,ip,op); 
    return 0;
}