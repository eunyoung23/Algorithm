//
//  Dynamic Programming01.cpp
//  CodingTest_w
//
//  Created by 이은영 on 2021/01/23.
//
/*
#include <bits/stdc++.h>

using namespace std;

int n;

int d[300001];

int main(){
    cin>>n;
    
    for(int i=2; i<=n; i++){
        d[i]=d[i-1]+1;
        if(i%5==0){
            d[i]=min(d[i],d[i/5]+1);
        }
        if(i%3==0){
            d[i]=min(d[i],d[i/3]+1);
        }
        if(i%2==0){
            d[i]=min(d[i],d[i/2]+1);
        }
    }
    
    cout<<d[n]<<" ";
    
    return 0;
}
*/
