#include <bits/s>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {   for (int j = 0; j < 5; j++){
            cin>>arr[i][j];
        }           
    }
    for (int i = 0; i < 5; i++)
    {   for (int j = 0; j < 5; j++){
            if(arr[i][j]==1){
                a=i;b=j;
            }
        }           
    }
    cout<<abs(a-2)+abs(b-2);

}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
