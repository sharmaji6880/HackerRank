#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++) {
        if(arr[i]>=38) {
            if(arr[i]%5>2) {
                arr[i]+=5-(arr[i]%5);
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}
