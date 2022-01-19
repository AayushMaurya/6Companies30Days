// Rotting oranges

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

int solve()
{
    int m, n;
    cin>>m>>n;
    int grid[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            cin>>grid[i][j];
    }

    int res=-1, count=0;
        set<pair<int, int>> st;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]==2)
                    st.insert({i, j});
                if(grid[i][j]!=0)
                    count++;
            }
        }
        if(count==0 || count==st.size())
            return 0;

        int size=0;
        while(st.size()!=size)
        {
            for(auto itr=st.begin(); itr!=st.end(); itr++)
            {
                pair<int, int> cor=*itr;
                int x=cor.first, y=cor.second;
                // cout<<x<<" "<<y<<endl;
                if(x+1<m && grid[x+1][y] == 1)
                    grid[x+1][y] = 2;
                
                if(y+1<n && grid[x][y+1] == 1)
                    grid[x][y+1] = 2;
                
                if(x-1>=0 && grid[x-1][y] == 1)
                    grid[x-1][y] = 2;
                
                if(y-1>=0 && grid[x][y-1] == 1)
                    grid[x][y-1] = 2;
            }
            size=st.size();
            // cout<<size<<endl;
            for(int i=0; i<m; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(grid[i][j]==2)
                        st.insert({i, j});
                }
            }
            // cout<<st.size()<<endl;
            res++;
        }
        if(st.size() != count)
            return -1;
        return res;

}

int main(){
    cout<<solve()<<endl;;
    return 0;
}