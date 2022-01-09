// Greatest common divisor of two strings

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
    string str1, str2;
    cin>>str1>>str2;

    if(str1 == str2)
    {
        cout<<str1<<endl;
        return;
    }

    if(min(str1.length(), str2.length()) == str2.length())
    {
        string temp = str1;
        str1 = str2;
        str2 = temp;
    }

    for(int i=str1.length() ; i>=1 ; i--)
    {
        if(str1.length()%i != 0 || str2.length()%i != 0)
            continue;

        string s = str1.substr(0, i);           // substr(position, length)
        int flag=1;

        for(int j=0 ; j<str1.length() ; j+=i)
        {
            if(str1.substr(j, i) != s)
            {
                flag=0;
                break;
            }
        }

        if(flag == 0)
            continue;

        for(int j=0 ; j<str2.length() ; j+=i)
        {
            if(str2.substr(j, i) != s)
            {
                flag=0;
                break;
            }
        }

        if(flag == 0)
            continue;

        cout<<s<<endl;
        return;
    }

    cout<<""<<endl;

    return;
}

int main(){
    solve();
    return 0;
}