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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;

        if(d<b){
          cout<<-1<<endl;
        }else if(d==b){
          if(c>a){
            cout<<-1<<endl;
          }else{
            cout<<a-c<<endl;
          }
        }else{
          a+=d-b;
          count=d-b;
          d=b;
          if(c>a){
            cout<<-1<<endl;
          }else{
            cout<<(a-c)+count<<endl;
          }
        }
    }
}