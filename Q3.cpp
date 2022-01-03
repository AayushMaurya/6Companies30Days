// Count the sub arrays having product less than K

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
    int n;
    ll k;
    cin>>n>>k;

    int a[n];
    for(int i=0 ; i<n ; i++)
        cin>>a[i];

    int i=0, j=0, res=0;
    ll pro=a[0];

    while(j<n)
    {
        if(pro < k)
        {
            res = res + j-i+1;
            j++;
            pro = pro*a[j];
        }
        else
        {
            pro = pro/a[i];
            i++;
        }
    }

    cout<<res<<endl;

    return;
}

int main(){
    solve();
    return 0;
}