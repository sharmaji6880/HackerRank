#include<bits/stdc++.h>
using namespace std;
bool hasAdjacent(string s) {
    int flag=0;
    
    for(int i=0;i<s.length()-1;i++) {
        if(s[i]==s[i+1]) {
            flag=1;
            break;
        }
    }
    if(flag) {
        return true;
    }
    return false;
}

int main() {
    string s;
    getline(cin,s);
    if(s.size()==1) {
        cout<<s;
    }
    else {
      
      while(!(s.size()<=1) & hasAdjacent(s)) {
        for(int i=0;i<s.size()-1;i++) {
          if(s[i]==s[i+1]) {
            s.erase(i,2);
            break;
          }
        }
      }
    
      if(s.length()) {
        cout<<s;
      }
      else {
        cout<<"Empty String";
      } 
    }
    return 0;
    
}
