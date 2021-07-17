#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long int n,maxSize,waste;
    int counter=0;
    int result=0;
    cin>>n>>maxSize>>waste;
    for(int i =0;i<n;i++){
        long int x;
        cin>>x;
        if(x<=maxSize){
           counter+=x;
        }
        if(counter>waste){
            result++;
            counter=0;
        }
    }
    cout<<result<<endl;
}
