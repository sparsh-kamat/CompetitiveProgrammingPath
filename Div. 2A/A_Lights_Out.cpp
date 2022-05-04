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
int a[5][5];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int test = 1;
    // cin>>test;
    while (test--)
    {
        for (int i = 1; i < 4; i++)
        {
            for (int j = 1; j < 4; j++)
            {
                cin>>a[i][j];
            }
        }

        for(int i=1;i<4;i++,cout<<endl){
            for (int j = 1; j < 4; j++)
            {
               cout<<1-((a[i][j]+a[i+1][j]+ a[i][j+1]+ a[i-1][j]+ a[i][j-1])%2);
            }
            
        }
        
    }
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