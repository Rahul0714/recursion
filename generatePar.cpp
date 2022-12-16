#include<iostream>
using namespace std;

void solve(int n,int op, int cl, string output){
    if(op==0 && cl==0){
        cout<<output<<" ";
        return;
    }
    if(op==cl || op==n){
        output+="(";
        solve(n,op-1,cl,output);
    }
    else if(op==0){
        output+=")";
        solve(n,op,cl-1,output);
    }else{
    string op1=output;
    string op2=output;
    op1+="(";
    op2+=")";
    solve(n,op-1,cl,op1);
    solve(n,op,cl-1,op2);
    }
}

// void solve(int op, int cl,string output){
//     if(op==0 && cl==0){
//         cout<<output<<endl;
//         return;
//     }
//     if(op!=0){
//         output+="{";
//         solve(op-1,cl,output);
//     }
//     if(cl>op){
//         output+="}";
//         solve(op,cl-1,output);
//     }
//     return;
// }

int main()
{
    int n;
    cin>>n;
    int op=n,cl=n;
    solve(op,cl,"");
    return 0;
}