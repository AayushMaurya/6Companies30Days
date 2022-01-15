// First non repeating character in a stream

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
    string A;
    cin>>A;

    unordered_map<char, int> mp;
    list<char> l;
    string ans="";
        
    int curr=0, prev=0;
    for(int i=0; i<A.size(); i++)
    {
        mp[A[i]]++;
        curr=mp.size();
        if(curr>prev)
            l.push_back(A[i]);
        else{
            auto it=find(l.begin(), l.end(), A[i]);
            if(it!=l.end())
                l.erase(it);
        }
                
        if(!l.empty())
            ans+=l.front();
        else
            ans+='#';
        prev=curr;
    }
            
    cout<<ans<<endl;

    return;
}

int main(){
    solve();
    return 0;
}