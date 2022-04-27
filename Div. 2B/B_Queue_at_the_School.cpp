#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,t; string s;char temp;
    cin>>n>>t;
    cin>>s;
    while(t>0){
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='B'&& s[i+1]=='G'){
               temp=s[i];
               s[i]=s[i+1];
               s[i+1]=temp; 
               i++;
            }
        }
        t--;        
    }
    cout<<s;
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
