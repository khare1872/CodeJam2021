#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a =t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int ans=0;
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i =0;i<n-1;i++){
            int j = min_element(v.begin()+i,v.end()) - v.begin();
            reverse(v.begin()+i,v.begin()+j+1);
            ans+=j-i+1;
        }
        cout<<"Case #"<<a-t<<": "<<ans<<endl;
    }
    return 0;
}