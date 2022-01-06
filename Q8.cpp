// Total Decoding Messages

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
    string str;
    cin>>str;

    if(str.size() < 1)
        return 0;
    if(str[0] == '0')
        return 0;
    if(str.size() == 1)
        return 1;

    int curr=1, prev=1;
    for(int i=1 ; i<str.size() ; i++)
    {
        int s1=str[i]-'0';
        int s2=(str[i-1]-'0')*10 + d1;
        int val = 0;

        if(d1>=1)   val=(val+curr)%1000000007;
        if(d2>9 && d1<=26)  val=(val+prev)%1000000007;

        prev=curr;
        curr=val;
    }

    return curr%1000000007;
}

int main(){
    solve();
    return 0;
}