#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k;
    cin>>k;
    string lowerCase="abcdefghijklmnopqrstuvwxyz";
    string upperCase="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0;i<s.size();i++) {
        if(s[i]-65>=0 && s[i]-65<=25) {
            
            s[i]=upperCase[(s[i]-65+k)%26];
            
        }
        if(s[i]-97>=0 && s[i]-97<=25) {
            s[i]=lowerCase[(s[i]-97+k)%26];
        }
    }
    cout<<s;
    return 0;
}
