// Phone directory

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
    string s;
    cin>>s;

    string contact[n];

    for(int i=0; i<n; i++)
        cin>>contact[i];

    vector<vector<string>> res;

    sort(contact, contact+n);
    vector<vector<string>> res;
    for(int i=0; i<s.size(); i++)
    {
        string str = s.substr(0, i+1);
        vector<string> temp;
        for(int j=0; j<n; j++)
        {
            if(contact[j].size() < str.size())  continue;
            if(j>0 && contact[j]==contact[j-1]) continue;
            if(contact[j].substr(0, i+1)==str)
                temp.push_back(contact[j]);
        }
        if(temp.size() == 0)
            temp.push_back("0");
        res.push_back(temp);
    }
    
    for(int i=0; i<res.size(); i++)
    {
        for(auto itr: res[i])
            cout<<it<<endl;
    }

    return;
}

int main(){
    solve();
    return 0;
}