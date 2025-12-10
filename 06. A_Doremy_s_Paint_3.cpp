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

        sort(a.begin(),a.end());
        int flag=0;
        int l=0;
        int r=n-1;
        int mid=l+(r-l)/2;

        if(n<=2){
          flag=1;
        }else if(a[0]==a[n-1]){
          flag=1;
        }else{
          if(n%2==0){
            if(a[0]==a[mid]&&a[mid+1]==a[n-1]){
              flag=1;
            }
          }else{
            if(a[0]==a[mid-1]&&a[mid+1]==a[n-1]&&(a[mid]==a[0]||a[mid]==a[n-1])){
              flag=1;
            }
          }
        }
        if(flag==1){
          cout<<"Yes"<<endl;
        }else{
          cout<<"No"<<endl;
        }
    }
}