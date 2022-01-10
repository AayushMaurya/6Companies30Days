// Maximum of all subarrays of size K

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

    for(int i=0; i<n; i++)
        cin>>arr[i];

    multiset<int> st;
    vector<int> ans;

    for(int i=0; i<k; i++)
        st.insert(arr[i]);
    ans.pb(*st.rbegin());

    for(int i=k; i<n; i++)
    {
        st.erase(st.find(arr[i-k]));
        st.insert(arr[i]);

        ans.pb(*st.rbegin());
    }

    for(auto itr=ans.begin(); itr!=ans.end(); itr++)
        cout<<*itr<<" ";
    cout<<endl;
    return;
}

int main(){
    solve();
    return 0;
}