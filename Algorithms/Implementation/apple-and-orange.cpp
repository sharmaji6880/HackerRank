#include <iostream>
using namespace std;

int main() {
    int s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int apples[m],oranges[n];
    for(int i=0;i<m;i++) {
        cin>>apples[i];
    }
    for(int i=0;i<n;i++) {
        cin>>oranges[i];
    }
    int appleCount=0,orangeCount=0;
    
    for(int i=0;i<m;i++) {
        if((a+apples[i])>=s && (a+apples[i])<=t) {
            appleCount++;
        }
    }
    for(int i=0;i<n;i++) {
        if((b+oranges[i])>=s && (b+oranges[i])<=t) {
            orangeCount++;
        }
    }
    
    cout<<appleCount<<endl<<orangeCount;
    return 0;
    
}
