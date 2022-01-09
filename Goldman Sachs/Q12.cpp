// NUmber of squares in N*N matrix

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
    ll n;
    cin>>n;

    ll res=n*(n+1)*(2*n + 1)/6;

    cout<<res<<endl;

    return;
}

int main(){
    solve();
    return 0;
}