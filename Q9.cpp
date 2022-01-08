// Smallest number following the pattern

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

    string res="";
    int num=1;
    std::vector<int> st;

    for(int i=0 ; i<n ; i++)
    {
        if(s[i] == 'D')
        {
            st.push_back(num);
            num++;
        }
        else{
            st.push_back(num);
            num++;

            while(st.size>0)
            {
                res+=to_string(*(st.end()-1));
                st.erase(st.end()-1);
            }
        }
    }
    st.push_back(num);
    while(st.size() > 0)
    {
        res+=to_string(*(st.end()-1));
        st.erase(st.end()-1);
    }
    cout<<res<<endl;

    return;
}

int main(){
    solve();
    return 0;
}