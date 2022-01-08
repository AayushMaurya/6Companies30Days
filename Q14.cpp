// Minimum size subarray sum

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
    int n, target;
    cin>>n>>target;

    std::vector<int> nums;
    for(int i=0 ; i<n ; i++)
    {
        int x;
        cin>>x;
        nums.pb(x);
    }

    int res=nums.size(), temp=nums[0];
        int i=0, j=0;
        int flag=0;
        while(i<nums.size())
        {
            if(temp<target){
                j++;
                if(j==nums.size())  break;
                temp+=nums[j];
            }
            else{
                flag=1;
                res=min(res, j-i+1);
                temp-=nums[i];
                i++;
            }
        }
        if(flag==0) cout<<res<<endl;
        else cout<<res<<endl;

    return;
}

int main(){
    solve();
    return 0;
}