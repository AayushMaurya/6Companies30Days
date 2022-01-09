// Longest mountain in an array

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
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    int res=0;
    for(int i=1 ; i<n-1 ; i++)
    {
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
        {
            int count=1;
            int j=i;

            while(j>0 && arr[j]>arr[j-1])
            {
                count++;
                j--;
            }

            while(i<n-1 && arr[i]>arr[i+1])
            {
                count++;
                i++;
            }

            res=max(res, count);
        }
    }

    cout<<res<<endl;
    return;
}

int main(){
    solve();
    return 0;
}