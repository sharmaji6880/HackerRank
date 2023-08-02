#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    
    int behind , faster;
    
    behind=x1>x2?2:1;
    faster=v1>v2?1:2;
    
    if(behind==faster ) {
        if((x1-x2)%(v2-v1)==0) {
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
    }
    else {
        cout<<"NO";
    }
    
    return 0;
    
    
}
