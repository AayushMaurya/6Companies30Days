// Nth ugly number

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

int min(int x, int y, int z)
    {
        int res=x;
        if(y<res)
            res=y;
       if(z<res)
        res=z;
        
        return res;
    }

void solve()
{
    int n;
    cin>>n;

    vector<int> ugl;
        int i2=0, i3=0, i5=0;
        ugl.push_back(1);
        while(ugl.size() < n)
        {
            int temp = min(ugl[i2]*2, ugl[i3]*3, ugl[i5]*5);
            if(temp == ugl[i2]*2)
                i2++;
            else if(temp == ugl[i3]*3)
                i3++;
            else
                i5++;
            if(temp != *(ugl.end()-1))
                ugl.push_back(temp);
        }
        
        
        cout<< *(ugl.end()-1)<<endl;

    return;
}

int main(){
    solve();
    return 0;
}