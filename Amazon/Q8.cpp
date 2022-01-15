// Count Ways to Nth stair (Order does not matter)

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

    cout<<(n/2) + 1<<endl;

    return;
}

int main(){
    solve();
    return 0;
}