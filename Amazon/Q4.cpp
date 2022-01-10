// Brackets in matrix chain miultiplication

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

string res;
void printParanthesis(int i, int j, int n, int *bracket, char& mat)
{
    if(i==j){
        res=res+mat;
        mat++;
        return;
    }

    res=res+"(";

    printParanthesis(i, *((bracket+i*n)+j), n, bracket, mat);
    printParanthesis(*((bracket + i * n) + j) + 1, j, n,
                     bracket, mat);
    res=res+")";

    return;

}

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    int m[n][n];
    int bracket[n][n];

    for(int i=1; i<n; i++)
        m[i][i]=0;

    for(int L=2; L<n; L++)
    {
        for(int i=1; i<n-L+1; i++)
        {
            int j=i+L-1;
            m[i][j]=INT_MAX;
            for(int k=i; k<j; k++){
                int temp = m[i][k] + m[k+1][j] + arr[i-1]*arr[j]*arr[k];

                if(temp<m[i][j]){
                    m[i][j]=temp;
                    bracket[i][j]=k;
                }
            }
        }
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }

    char mat='A';
    printParanthesis(1, n-1, n, (int*)bracket, mat);
    cout<<res<<endl;
    return;
}

int main(){
    solve();
    return 0;
}