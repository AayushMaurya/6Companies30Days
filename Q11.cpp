// Find missing and repeating number in array

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

// [6, 7, 1, 4, 2, 4, 5]

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    int i=0;
        int *res = (int*)malloc(2*sizeof(int));
        while(i<n)
        {
            cout<<i<<endl;
            if(arr[i]==i+1 || arr[arr[i]-1]==arr[i])
                i++;
            else{
                int temp=arr[i];
                arr[i]=arr[arr[i]-1];
                arr[temp-1]=temp;
            }
        }
        for(i=0 ; i<n ; i++)
        {
            if(arr[i] != i+1)
            {
                res[0]=i+1;
                res[1]=arr[i];
                break;
            }
        }
        
        cout<<res[0]<<" "<<res[1]<<endl;

    return;
}

int main(){
    solve();
    return 0;
}