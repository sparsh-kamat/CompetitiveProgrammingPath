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
 
 //4 7 47 44  74 77 444 447 474 477 744 747 774 777
 void solve(){
     int arr[14] = {4, 7, 47, 44,  74, 77, 444, 447, 474, 477, 744 ,747, 774, 777};
     bool flag= false;
     int s;
     cin>>s;
     for (int i = 0; i < 14; i++)
     {
        if(s%arr[i]==0){
            flag=true;
        }
     }
     if(flag) cout<< "YES";
     else cout<< "NO";
     
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
 
 
