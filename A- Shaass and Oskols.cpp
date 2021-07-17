#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int nWires;
    int x[1000],y[1000];
    cin>>nWires;
    int Wires[nWires];
    for(int i=0;i<nWires;i++){
        cin>>Wires[i];
    }
    int bird;
    cin>>bird;
    for(int i=0;i<bird;i++){
        cin>>x[i]>>y[i];
        Wires[x[i]]=Wires[x[i]]+(Wires[x[i]-1]-y[i]);
        Wires[x[i]-2]=Wires[x[i]-2]+y[i]-1;
        Wires[x[i]-1]=0;
    }
    for(int i=0;i< sizeof(Wires)/ sizeof(*Wires);i++){
        cout<<Wires[i]<<endl;
    }
}