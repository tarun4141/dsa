#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> arr,int d,int q,int r,int n){
    int a=d*q+r;
    for(int i=0;i<n;i++){
        if(arr[i]==a) return i;
    }
    return -1;
}

int main() {
   int n;cin>>n;
   int d,q,r;
   vector<int> v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];}
   
   
   cin>>d>>q>>r;
   cout<<helper(v,d,q,r,n);
   
    return 0;
}
