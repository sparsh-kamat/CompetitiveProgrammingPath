#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n,amazing=0,best,worst;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    best=arr[0];
    worst=best;
    for (int j = 1; j < n; j++)
    {
        if(arr[j]>best) {
            amazing++;
            best=arr[j];
        }
        if(arr[j]<worst) {
            amazing++;
            worst=arr[j];
        }
    }
    cout<<amazing;
    
    return 0;
}

