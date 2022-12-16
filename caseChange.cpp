#include<iostream>
using namespace std;

// void solve(int i, string op){
//     if(i==op.length()){
//         cout<<op<<endl;
//         return;
//     }
//     op[i]=op[i]-32;
//     solve(i+1,op);
//     op[i]=op[i]+32;
//     solve(i+1,op);
// }

void solve(string ip, string op){
    if(ip.length()==0){
        cout<<op<<" ";
        return;
    }
    string op1=op;
    string op2=op;
    op2+=toupper(ip[0]);
    op1+=tolower(ip[0]);
    // cout<<op1<<" "<<op2<<endl;
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
}

int main()
{
    string ip="abc";
    solve(ip,"");
    return 0;
}