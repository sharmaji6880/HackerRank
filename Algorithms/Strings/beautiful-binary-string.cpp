#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string str=s;
    for(int i=0;i<n-2;i++) {
        if(str[i]=='0' && str[i+1]=='1' && str[i+2]=='0') {
            str[i+2]='1';
        }
    }
    int count=0;
    for(int i=0;i<n;i++) {
        if(s[i]!=str[i]) {
            count++;
        }
    }
    cout<<count;
    
    return 0;
    
}
