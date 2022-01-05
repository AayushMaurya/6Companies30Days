// Distributing M items in a circle of size N starting from Kth position

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll max(ll x, ll y)
{
    return (x>y)?x:y;
}
ll min(ll x, ll y)
{
    return (x>y)?y:x;
}
void swap(ll *x, ll *y)
{
    ll temp = *x;
    *x = *y;
    *y = temp;
}


void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    if(m <= n-k+1)
    {
        cout<<k+m-1<<endl;
        return;
    }

    m -= n-k+1;

    int res = (m%n==0)?n:(m%n);
    cout<<res<<endl;

    return;
}

int main(){
    solve();
    return 0;
}