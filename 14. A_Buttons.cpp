#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--) {
        int a,b,c;
        cin>>a>>b>>c;
        int first=0;
        int second=0;

        if(c%2==0){
          first=a+c/2;
        }else{
          first=a+c/2+1;
        }
        second=b+c/2;

        if(first>second){
          cout<<"First"<<endl;
        }else{
          cout<<"Second"<<endl;
        }
    }
}