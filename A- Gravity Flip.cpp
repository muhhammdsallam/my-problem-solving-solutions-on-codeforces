#include <iostream>
using namespace std;

int main()
{


    int x;
    cin>>x;
    int arr[x];
    for (int i=0;i<x;i++){
        cin>>arr[i];
    }
    for (int i=0;i<x;i++){
        for (int j = i + 1; j < x;j++)
        {

            if (arr[i] > arr[j])
            {
                int a;
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;

            }

        }
    }
    for(int i = 0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}