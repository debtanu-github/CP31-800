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

        int num=n;
        int dig=0;

        while(num>9){
          num/=10;
          dig++;
        }

        int a=10;
        int d=9;
        int prev=0;

        prev=a+(dig-1)*d;

        int ans=0;

        ans=prev+num-1;
        cout<<ans<<endl;
    }
}