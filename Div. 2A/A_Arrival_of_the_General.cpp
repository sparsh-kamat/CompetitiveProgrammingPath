#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#define ll long long
#define mod 1000000007

using namespace std;

void solve(){
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=0; int min=max;
    
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>arr[max]) max=i;
        if(arr[i]<=arr[min]) min =i;
    }
    int time=0;
    while(min!=n-1 || max!=0){
        if(min!=n-1 && min!=max-1){
            min++;time++;
        }
        if(max!=0 && max!=min+1){
            max--;time++;
        }
        if(min!=n-1 && max!=0 && max==min+1){
            max--;min++;time++;
        }
    }
    cout<<time;
    
    
}        


int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int test=1;
    //cin>>test;
    while(test--){
        solve();
    }
    return 0;
}


/*
 _______  _______  _______  _______           _______  _______          
(       )(  ____ \(  ____ )(  ____ \|\     /|(  ____ )(  ___  )|\     /|
| () () || (    \/| (    )|| (    \/| )   ( || (    )|| (   ) |( \   / )
| || || || (__    | (____)|| |      | |   | || (____)|| (___) | \ (_) / 
| |(_)| ||  __)   |     __)| |      | |   | ||     __)|  ___  |  \   /  
| |   | || (      | (\ (   | |      | |   | || (\ (   | (   ) |   ) (   
| )   ( || (____/\| ) \ \__| (____/\| (___) || ) \ \__| )   ( |   | |   
|/     \|(_______/|/   \__/(_______/(_______)|/   \__/|/     \|   \_/   
                                                                        
 */