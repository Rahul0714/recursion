#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int temp){
    if(st.empty()){
        st.push(temp);
        return;
    }
    int newTemp=st.top();
    st.pop();
    insert(st,temp);
    st.push(newTemp);
}

void rev(stack<int> &st){
    // cout<<st.top()<<" ";
    if(st.size()==1)
        return;
    int temp=st.top();
    st.pop();
    rev(st);
    insert(st,temp);
}

int main()
{
    int n;
    cin>>n;
    stack<int> st;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        st.push(temp);
    }
    rev(st);
    // cout<<st.top();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}