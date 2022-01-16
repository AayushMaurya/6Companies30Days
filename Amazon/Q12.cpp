// Column name from a given column number

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

    string res="";
    while(n)
    {
        int x=n%26;
        char c='A'+x-1;
        res=c+res;
    }

    cout<<res<<endl;
    return;
}

int main(){
    solve();
    return 0;
}