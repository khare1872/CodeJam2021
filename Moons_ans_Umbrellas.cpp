#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a =t;
    while(t--){
        int x,y;
        string s;
        cin>>x>>y>>s;
        int count = 0;
        char c='a';
        
        for(int i=0;i<s.length();i++){
            if(s[i]!='?'){
                count = i;
                c=s[i];
                break;
            }
        }
        if(c=='a') cout<<"Case #"<<a-t<<": "<<0<<endl;
        else {
        for(int i = 0; i<count;i++){
            s[i]=c;
        }
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!='?'){
                count = i;
                c=s[i];
                break;
            }
        }
        for(int i = s.length()-1; i>count;i--){
            s[i]=c;
        }
        for(int i=1;i<s.length()-1;i++){
              if(s[i]=='?'){
                 s[i]=s[i-1];
        }
        }
        int ans  = 0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='J'&&s[i+1]=='C') ans+=y;
            if(s[i]=='C'&&s[i+1]=='J') ans+=x;
        }
        cout<<"Case #"<<a-t<<": "<<ans<<endl;
    }
    }
    return 0;
}