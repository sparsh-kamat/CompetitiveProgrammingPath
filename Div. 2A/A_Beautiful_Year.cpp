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

bool solve(int s)
{
   string a = to_string(s);
 
	for (unsigned int i = 0; i < 4; i++)
		for (unsigned int j = i+1; j < 4; j++)
			if (a[i] == a[j])
				return true;
 
	return false;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;

    while(test--)
    {
        int s;
	    cin >> s;
	    s++;
 
	    while (solve(s))
	    {
		    s++;
	    }
 
 
	cout << s;
	return 0;
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