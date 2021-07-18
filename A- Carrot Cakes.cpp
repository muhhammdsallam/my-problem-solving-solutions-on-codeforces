//Author: muhhammdsallam
//Verdict: Accepted
//Problem URL: https://codeforces.com/contest/799/problem/A
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    float t1=0;
    int t2=0;
    if(n%k==0){
        t1 = n/k * t;
    }
    else{
        t1=n/k;
        t1++;
        t1=t1*t;
    }

    t2 = d + t;
    if(k > n || t2 >= t1)
        cout<<"NO";

    if(t2 < t1) {
        cout << "YES";
    }
}