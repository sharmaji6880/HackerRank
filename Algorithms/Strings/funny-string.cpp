#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        string reverse="";
        for(int i=s.size()-1;i>=0;i--) {
            reverse+=s[i];
        }
        vector<int> arr1,arr2;
        for(int i=0;i<s.size()-1;i++) {
            arr1.push_back(abs(s[i]-s[i+1]));
            arr2.push_back(abs(reverse[i]-reverse[i+1]));
        }
        if(arr1==arr2) {
            cout<<"Funny\n";
        }
        else {
            cout<<"Not Funny\n";
        }
        
    }
    return 0;
    
}
