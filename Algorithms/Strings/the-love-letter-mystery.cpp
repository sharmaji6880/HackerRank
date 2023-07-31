#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q;
    while(q--) {
        string s;
        cin>>s;
        int len = s.size();
        int count=0;
        
        for(int i=0;i<len/2;i++) {
            if(s[i]!=s[len-1-i]) {
                count+=abs(s[i]-s[len-1-i]);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
