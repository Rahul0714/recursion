#include<bits/stdc++.h>
using namespace std;

void remove(stack<int> &st, int n){
    if(n==1){
        st.pop();
        return;
    }
    int temp=st.top();
    st.pop();
    remove(st,n-1);
    st.push(temp);
}

int main()
{
    stack<int> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        st.push(temp);
    }
    remove(st,(n/2)+1);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}