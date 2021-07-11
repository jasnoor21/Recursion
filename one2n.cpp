#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    if(n==1)
    {
        cout<<1<<' ';
        return;
    }
    
    solve(n-1);
    cout<<n<<' ';
}

int main(){
    solve(5);
    return 0;
}