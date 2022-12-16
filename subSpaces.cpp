#include<bits/stdc++.h>
using namespace std;

// void solve(string ip, string op){
//     if(ip.size()==0){
//         cout<<op<<"\n";
//         return;
//     }
//     string op1=op;
//     string op2=op;
//     op1=op1+" "+ip[0];
//     op2+=ip[0];
//     ip.erase(ip.begin()+0);
//     solve(ip,op1);
//     solve(ip,op2);
// }

void solve(int i,vector<string> &ip, vector<string> &op){
    if(i==ip.size()){
        for(auto it:op)
            cout<<it;
        cout<<endl;
        return;
    }
    op.insert("_");
    op.push_back(ip[i]);
    solve(i+1,ip,op);
    op.erase(op.begin()+i);
    op.push_back(ip[i]);
    solve(i+1,ip,op);
}

int main()
{
    int n;
    cin>>n;
    vector<string> ip(n),op(n);
    for(int i=0;i<n;i++)
        cin>>ip[i];
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(0,ip,op);
    return 0;
}

//needs tobe checked