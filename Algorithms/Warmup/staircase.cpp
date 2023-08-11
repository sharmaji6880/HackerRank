#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int maxIndex=n-1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(j>=maxIndex-i) {
                cout<<"#";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
