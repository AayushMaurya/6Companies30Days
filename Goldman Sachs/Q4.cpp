// Run length encoding

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
    string s;
    cin>>s;

    int i=1, count=1;
    string res="";
    char x=s[0];

    while(i<s.size())
    {
        if(s[i] != x)
        {
            res+=x;
            res+=to_string(count);
            count=1;
            x=s[i];
        }
        else
            count++;
        i++;
    }

    res+=x;
    res+=to_string(count);

    cout<<res<<endl;

    return;
}

int main(){
    solve();
    return 0;
}