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
        cin>>n;
        int odd=0;
        vector<int>a(n);

        for(int i=0; i<n; i++){
          cin>>a[i];
          if(a[i]%2==1){
            odd++;
          }
        }
        if(odd%2==1){
          cout<<"NO"<<endl;
        }else{
          cout<<"YES"<<endl;
        }
    }
}