#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q;
    while(q--) {
        string s;
        cin>>s;
        int n=s.size();
        int count=0;
        for(int i=0;i<n-1;i++) {
            if(s[i+1]==s[i]) {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
