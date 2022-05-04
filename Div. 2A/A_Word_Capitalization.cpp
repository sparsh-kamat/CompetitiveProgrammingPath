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
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >>s;
    s[0]=toupper(s[0]);
    cout<<s;
    
    return 0;
}