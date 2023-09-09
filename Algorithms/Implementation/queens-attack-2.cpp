#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int rq,cq;
    cin>>rq>>cq;
    vector<int> r(k),c(k);
    for(int i=0;i<k;i++) {
        cin>>r[i]>>c[i];
    }
    map<int,set<int>> m;
    for(int i=0;i<k;i++) {
        if(!m.count(r[i]-1)) {
            m[r[i]-1]={c[i]-1};
        }else {
            m[r[i]-1].insert(c[i]-1);
        }
    }
    int count=0;
    
    //Direction 1 i.e, towards left
    int i=rq-1,j=cq-2;
    while(j>=0) {
        if(m.count(i) && m[i].count(j)) {
            break;
        }else {
            count++;
        }
        j--;
    }
    
    //Direction 2 i.e, upper left diagonal
    i=rq,j=cq-2;
    while(i<n && j>=0) {
        if(m.count(i) && m[i].count(j)) {
            break;
        }else {
            count++;
        }
        i++;
        j--;
    }
    
    //Direction 3 i.e, upwards
    i=rq,j=cq-1;
    while(i<n) {
        if(m.count(i) && m[i].count(j)) {
            break;
        }else {
            count++;
        }
        i++;
    }
    
    //Direction 4 i.e, upper right daigonal
    i=rq,j=cq;
    while(i<n && j<n) {
        if(m.count(i) && m[i].count(j)) {
            break;
        }else {
            count++;
        }
        i++;
        j++;
    }
    
    //Direction 5 i.e, towards right
    i=rq-1,j=cq;
    while(j<n) {
        if(m.count(i) && m[i].count(j)) {
            break;
        }else {
            count++;
        }
        j++;
    }
    
    //Direction 6 i.e, lower right diagonal
    i=rq-2,j=cq;
    while(i>=0 && j<n) {
        if(m.count(i) && m[i].count(j)) {
            break;
        }else {
            count++;
        }
        i--;
        j++;
    }
    
    //Direction 7 i.e, downwards
    i=rq-2,j=cq-1;
    while(i>=0) {
        if(m.count(i) && m[i].count(j)) {
            break;
        }else {
            count++;
        }
        i--;
    }
    
    //Direction 8 i.e, lower left daigonal
    i=rq-2,j=cq-2;
    while(i>=0 && j>=0) {
        if(m.count(i) && m[i].count(j)) {
            break;
        }else {
            count++;
        }
        i--;
        j--;
    }
    
    cout<<count;
    
    return 0;
}

