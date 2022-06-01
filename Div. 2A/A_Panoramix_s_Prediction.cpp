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
    int n,m;
    cin>>n>>m;

    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int pos;
    for (int  i = 0; i < 15; i++)
    {
        if (arr[i]==n && i!=15)
        {
           if(arr[i+1]==m){
               cout<<"YES";
           }
           else  cout<<"NO";
        }
        else if (arr[i]==n && i==15)
        {
            cout<<"NO";
        }
        
    }
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