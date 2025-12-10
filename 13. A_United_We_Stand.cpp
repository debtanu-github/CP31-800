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
        for(int i=0; i<n; i++){
          cin>>a[i];
        }

        vector<int>b;
        vector<int>c;

        sort(a.begin(),a.end());

        if(a[0]==a[n-1]){
          cout<<-1<<endl;
          continue;
        }
        b.push_back(a[0]);
        int i=1;
        while(a[i-1]==a[i]){
          b.push_back(a[i]);
          i++;
        }

        for(; i<n; i++){
          c.push_back(a[i]);
        }

        cout<<b.size()<<" "<<c.size()<<endl;
        for(int k=0; k<b.size(); k++){
          cout<<b[k]<<" ";
        }
        cout<<"\n";
        for(int k=0; k<c.size(); k++){
          cout<<c[k]<<" ";
        }
        cout<<"\n";
    }
}