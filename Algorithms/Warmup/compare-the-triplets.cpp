#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> a(3),b(3);
    for(int i=0;i<3;i++) {
        cin>>a[i];
    }
    for(int i=0;i<3;i++) {
        cin>>b[i];
    }
    int ap=0;
    int bp=0;
    for(int i=0;i<3;i++) {
        if(a[i]>b[i]) {
            ap++;
        }
        else if(b[i]>a[i]) {
            bp++;
        }
    }
    cout<<ap;
    cout<<" "<<bp;
    
    return 0;
}
