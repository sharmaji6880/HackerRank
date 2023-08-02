#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    int lower=a[0],upper=b[0];
    
    for(int i=0;i<m;i++) {
        if(a[i]>lower){
            lower=a[i];
        }
    }
    
    for(int i=0;i<n;i++) {
        if(b[i]<upper) {
            upper=b[i];
        }
    }
    
    int count=0;
    
    for(int i=lower;i<=upper;i++) {
        int flag1=0,flag2=0;
        
        for(int j=0;j<m;j++) {
            if(i%a[j]!=0) {
                flag1=1;
                break;
            }
        }
        for(int k=0;k<n;k++) {
            if(b[k]%i!=0) {
                flag2=1;
                break;
            }
        }
        if(flag1==0 && flag2==0) {
            count++;
        }
    }
    
    cout<<count;
    return 0;
}
