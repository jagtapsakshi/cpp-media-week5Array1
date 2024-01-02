#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int max = arr[0]; // or max = INT_MIN

    for(int i=0;i<=n-1;i++){
        if(max < arr[i])
        max = arr[i];
    }  

    cout<<"Largest number in array :"<<max<<endl;

    int smax = arr[0]; // or max = INT_MIN

    for(int i=0;i<=n-1;i++){
        if(smax < arr[i] && smax!=max)
        smax = arr[i];
    }  
    cout<<"Second largest number in array:"<<smax;

}


