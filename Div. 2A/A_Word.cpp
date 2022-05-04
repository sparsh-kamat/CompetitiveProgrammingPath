#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int a=0,b=0;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if(s[i]>='A' && s[i]<='Z') a++;
        if(s[i]>='a' && s[i]<='z') b++;

    }

    if(a>b){ 
        for (auto & c: s) c = toupper(c);
        cout<<s;
    }
    else{
        for (auto & c: s) c = tolower(c);
        cout<<s;
    }
    

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
