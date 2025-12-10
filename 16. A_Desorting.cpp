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

        vector<int>a(n);
        cin>>a[0];
        int min= INT_MAX;
        int diff=0;

        for(int i=1;i<n; i++){
          cin>>a[i];

          diff=a[i]-a[i-1];

          if(diff<min){
            min=diff;
          }
        }

        if(min<0){
          cout<<0<<endl;
        }else{
          cout<<min/2+1<<endl;
        }
    }
}