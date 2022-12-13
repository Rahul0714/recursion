#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int temp){
    if(st.size()==0 || st.top()<=temp){
        st.push(temp);
        return;
    }
    int newTemp=st.top();
    st.pop();
    insert(st,temp);
    st.push(newTemp);
}

void sort(stack<int> &st){
    if(st.size()==1)
        return;
    int temp=st.top();
    st.pop();
    sort(st);
    insert(st,temp);
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
    sort(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}