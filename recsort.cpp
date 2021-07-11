#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &v,int temp){
    if(v.size()==0 || v[v.size()-1] <= temp)
    {
        v.push_back(temp);
        return;
    }
        int temp1 = v[v.size()-1];
        v.pop_back();
        insert(v,temp);
        v.push_back(temp1);
    
    return;
}

void recsort(vector<int> &v){
    if(v.size()==1)return;
    int temp = v[v.size()-1];
    v.pop_back();
    recsort(v);
    insert(v,temp);
}

int main(){
    vector<int> v;
    int a,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    recsort(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<' ';
    }
    return 0;
}