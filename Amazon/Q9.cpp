// Count Ways to Nth stair (Order does not matter)

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
    int board[9][9];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>board[i][j];
    }

    set<int> st;
        int prev=0, curr=0;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                // cout<<i<<" "<<j<<endl;
                if(board[i][j] == 0)    continue;
                st.insert(1*100 + i*10 + board[i][j]);
                st.insert(2*100 + j*10 + board[i][j]);
                int bor=(i/3)*3 + (j/3);
                st.insert(3*100 + bor*10 + board[i][j]);
                
                curr=st.size();
                // cout<<prev<<" "<<curr<<endl;
                if(curr!=prev+3)
                    {
                        cout<<0<<endl;
                        return;
                    }
                prev=curr;
            }
        }
        cout<<1<<endl;

    return;
}

int main(){
    solve();
    return 0;
}