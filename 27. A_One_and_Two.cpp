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
        int count=0;
        int two=0;

        cin>>n;
        vector<int>a(n);
        int i=0;

        for(i=0; i<n; i++){
          cin>>a[i];
          if(a[i]==2){
            two++;
          }
        }

        for(i=0; i<n; i++){
          if(a[i]==2){
            count++;
          }
          if(count==two/2){
            break;
          }
        }

        if(two==0){
          cout<<1<<endl;
        }else if(two%2!=0){
          cout<<-1<<endl;
        }else{
          cout<<i+1<<endl;
        }
    }
}