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
        int x;
        cin>>n;
        cin>>x;
        vector<int>a(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int max=0;
        int start=a[0];
        int last=2*(x-a[n-1]);

        if(start>=last){
            max=start;
        }else{
            max=last;
        }

        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]>max){
                max=a[i+1]-a[i];
            }
        }

        cout<<max<<endl;

    }
}