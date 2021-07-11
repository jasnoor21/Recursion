#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int temp){
    if(s.size()== 0 || s.top()>=temp)
    {
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
    return;
}

void sortstack(stack<int> &s){
    if(s.size()==1)return;
    int temp = s.top();
    s.pop();
    sortstack(s);
    insert(s,temp);
}

int main(){
    stack<int> s;
    int a,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        s.push(a);
    }
    
    sortstack(s);

    for(int i=0;i<n;i++){
        cout<<s.top()<<' ';
        s.pop();
    }    

    return 0;
}