#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if(n==1)
    {
        return 1;
    }
    
    return n * solve(n-1);
}

int main(){
    cout<<solve(6);
    return 0;
}