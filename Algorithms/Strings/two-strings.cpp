#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s1,s2;
        cin>>s1>>s2;
        map<char,int> mymap;
        for(int i=0;i<(int) s1.size();i++) {
            mymap[s1[i]]++;
        }
        int flag=0;
        for(int i=0;i<(int) s2.size();i++) {
            if(mymap.count(s2[i])) {
                cout<<"YES\n";
                flag=1;
                break;
            }
        }
        if(flag) continue;
        cout<<"NO\n";
    }
    return 0;
}
