// Maximum profit by buyinf and selling a stock atmost K times

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
    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    int dp[k+1][n];

    for(int i=0 ; i<n ; i++)
        dp[0][i]=0;
    for(int i=0 ; i<=k ; i++)
        dp[i][0]=0;

    for(int t=1; t<=k; t++)
    {
        for(int d=1; d<n; d++)
        {
            int ma = d[t][d-1];

            for(int pd=0; pd<d; pd++)
                ma = max(ma, dp[t-1][pd] + arr[d]-arr[pd]);

            dp[t][d]=ma;
        }
    }

    cout<<d[k][n-1]<<endl;

    return;
}

int main(){
    solve();
    return 0;
}