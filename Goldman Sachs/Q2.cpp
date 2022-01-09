// Overlappng rectangle problemcd ..


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
    int L1[2], R1[2], L2[2], R2[2];

    cin>>L1[0]>>L1[1]>>R1[0]>>R1[1]>>L2[0]>>L2[1]>>R2[0]>>R2[1];

    if(L1[1] < R2[1] || L1[0] > R2[0] || R1[0] < L2[0] || R1[1] > L2[1])
            cout<<0<<endl;
        cout<<1<<endl;

    return;
}

int main(){
    solve();
    return 0;
}