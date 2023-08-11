#include <iostream>
using namespace std;

int main() {
    int array[5];
    for(int i=0;i<5;i++) {
        cin>>array[i];
    }
    
    long min,max;
    int minIndex=0,maxIndex=0;
    long minSum,maxSum;
    minSum=0,maxSum=0;
    min=array[0];
    max=array[0];
    for(int i=0;i<5;i++) {
        if(array[i] < min) {
            min=array[i];
            minIndex=i;
        }
    }
    for(int i=0;i<5;i++) {
        if(array[i]>max) {
            max=array[i];
            maxIndex=i;
        }
    }
    
    for(int i=0;i<5;i++) {
        if(array[i]==min && i==minIndex) {
            continue;
        }
        maxSum+=array[i];
    }
    for(int i=0;i<5;i++) {
        if(array[i]==max && i==maxIndex) {
            continue;
        }
        minSum+=array[i];
    }
    
    cout<<minSum<<" "<<maxSum;
    
    return 0;
}
