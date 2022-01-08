// Decode the string

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

    string num="", res="", temp="", temp2="";
    int n;

    stack<char> st;
    int p=0;

    while(p<s.size())
    {
        if(s[p] == ']')
        {
            while(st.top() != '[')
            {
                temp = st.top()+temp;
                st.pop;
            }
            st.pop();

            while(isdigit(st.top()))
            {
                num=st.top()+num;
                st.pop();
                if(st.empty())
                    break;
            }

            n=stoi(num);

            for(int i=1 ; i<=n ; i++)
                temp2 = temp2 + temp;

            if(st.empty())
            {
                res=temp2;
                break;
            }

            for(int i=0 ; i<temp2.size() ; i++)
                st.push(temp2[i]);

            temp="";
            temp2="";
            num="";
        }
        else
            st.push(s[p]);
        p++;
    }

    return;
}

int main(){
    solve();
    return 0;
}