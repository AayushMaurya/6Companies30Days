// Given an array of string, return all groups of string that are anagram

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

    string s[n];

    for(int i=0 ; i<n ; i++)
        cin>>s[i];

    map<string, vector<string>> m;

    for(int i=0 ; i<n ; i++)
    {
        string a = s[i];
        sort(a.begin(), a.end());
        m[a].push_back(s[i]);
    }

    vector<vector<string>> res(m.size());
    int index=0;

    for(auto x:m)
    {
        auto v = x.second;

        for(int i=0 ; i<v.size() ; i++)
            res[index].push_back(v[i]);

        index++;    
    }

    for(int i=0 ; i<res.size() ; i++)
    {
        for(int j=0 ; j<res[i].size() ; j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }

    return;
}

int main(){
    solve();
    return 0;
}