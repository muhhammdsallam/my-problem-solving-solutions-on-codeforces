#include <iostream>
#include <string>
#include <bits/stdc++.h>


using namespace std;

int main() {
    int y,w;
    int d=0;
    int num=0;
    int den=6;
    int D;
    cin>>y>>w;
    if(y>w) {
        for (int i = y; i <= 6; i++) {
            d = i;
        }
        num=d-y+1;
        D = __gcd(num, den);
        num = num / D;
        den = den / D;
        cout << num <<"/"<<den<< endl;
    }
    if(w>y) {
        for (int i = w; i <= 6; i++) {
            d = i;
        }
        num=d-w+1;
        D = __gcd(num, den);
        num = num / D;
        den = den / D;
        cout << num <<"/"<<den<< endl;
    }
    if(y==w){
        for (int i = y; i <= 6; i++) {
            d = i;
        }
        num=d-y+1;
        D = __gcd(num, den);
        num = num / D;
        den = den / D;
        cout << num <<"/"<<den<< endl;
    }
}