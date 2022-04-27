#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int temp=k;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i]; /* code */
    }
    int i =0;
    while(k>=0 && i<n){
        if(k>=arr[i]){
            k=k-arr[i];
            cout<<"1";
            i++;
        }
        else{
            cout<<"0"; 
            i++;
        }
    } 
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test;
    cin>>test;
    while(test--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
