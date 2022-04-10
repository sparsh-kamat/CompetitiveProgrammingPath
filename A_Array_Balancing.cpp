#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void bubbleSort(int arr[], int n)
{
    int i, j,temp;
    for (i = 0; i < n-1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
}


void solve()
{
    int n;
    cin>>n;
    int a1[2*n],ans=0;
    for (int k = 0; k < 2*n; k++)
    {
        cin>>a1[k];
    }
    bubbleSort(a1,2*n);
    
    for(int i = 0; i < n; ++i){ 
        
        ans+=abs(a1[i]-a1[i+1])+abs(a1[i+5]-a1[i+6]);
        cout<<ans;
    }
    cout<<ans;
    
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
