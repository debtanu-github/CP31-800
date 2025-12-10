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
        int n;
        string s;

        cin>>n>>s;

        if(n<=1){
          cout<<n<<endl;
          continue;
        }

        int l=0;
        int r=s.size()-1;

        while(l<=r){
          if(s[l]=='1' && s[r]=='0' || s[l]=='0' && s[r]=='1'){
            l++;
            r--;
          }else{
            break;
          }
        }

        if(r-l<0){
          cout<<0<<endl;
        }else{
          cout<<r-l+1<<endl;
        }
    }
}