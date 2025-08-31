#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if(!(cin>>t)) return 0;

    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        int ans = 0,prev = 0;
        for(int i = 0;i<n;i++){
            ans = max(ans,a[i]-prev);
            prev = a[i];
        }
        ans = max(ans,2*(x-a.back()));
        cout<<ans<<endl;
    }

    return 0;
}