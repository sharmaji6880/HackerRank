#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    float pos=0,neg=0,zeroes=0;
    
    for(int i=0;i<n;i++) {
        if(arr[i]<0) {
            neg++;
        }
        else if(arr[i]>0) {
            pos++;
        }
        else {
            zeroes++;
        }
    }
    
    
    float ratio1=pos/n;
    float ratio2=neg/n;
    float ratio3=zeroes/n;
    
    cout<<ratio1<<endl;
    cout<<ratio2<<endl;
    cout<<ratio3<<endl;
    
    return 0;
}
