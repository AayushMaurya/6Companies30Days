// Array pair sum divisibility problem

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

    std::map<int, int> mp;

    for(int i=0 ; i<n ; i++)
        mp[arr[i]%k]++;

    if(mp[0]%2 != 0)
    {
        cout<<"False"<<endl;
        return;
    }

    for(int i=1 ; i<k ; i++)
        {
            if(i == k-i)
            {
                if(mp[i]%2 != 0){
                    cout<<"false"<<endl;
                    return;
                }
            }
            if(mp[i] != mp[k-i]){
                cout<<"false"<<endl;
                return;
            }
        }
        cout<<"True"<<endl;

    return;
}

int main(){
    solve();
    return 0;
}