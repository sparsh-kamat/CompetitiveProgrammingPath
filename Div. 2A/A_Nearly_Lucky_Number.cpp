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
#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string a;
    ll c = 0;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '7' || a[i] == '4')
        {
            c++;
        }
    }

    
    bool s=true;
    string luck=to_string(c);
    for (int i = 0; i < luck.size(); i++)
    {
        if (luck[i]!='7' && luck[i]!='4')
        {
            s=false;
            break;
        }
    }
    if (s)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
