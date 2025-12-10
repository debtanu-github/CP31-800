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
        vector<int>a(n-1);
        int sum=0;

        for(int i=0; i<n-1; i++){
          cin>>a[i];
          sum+=a[i];
        }

        cout<<0-sum<<endl;
    }
}