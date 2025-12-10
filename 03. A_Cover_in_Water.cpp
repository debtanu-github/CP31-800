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

        string s;
        cin>>s;

        int flag=0;
        int count=0;

        for(int i=1; i<n-1; i++){
            if(s[i]=='.'&& s[i-1]==s[i] && s[i]==s[i+1]){
                flag=1;
                break;
            }
            if(s[i]=='.'){
                count++;
            }
        }
        if(n==1){
            if(s[0]=='.'){
                count=1;
            }
        }else if(n==2){
            if(s[0]=='.'&& s[1]=='.'){
                count=2;
            }else if(s[0]=='.'||s[1]=='.'){
                count=1;
            }
        }else{
            if(flag==1){
                count=2;
            }else{
                if(s[0]=='.'){
                    count++;
                }
                if(s[n-1]=='.'){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}