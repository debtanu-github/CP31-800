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

        vector<int>a(n+1);
        int max=0;
        int count=0;
        a[n]=1;

        for(int i=0; i<n+1; i++){
          if(i!=n){
            cin>>a[i];
          }
          if(a[i]==0){
            count++;
          }else{
            if(count>=max){
              max=count;
            }
            count=0;
          }
        }
        cout<<max<<endl;
    }
}