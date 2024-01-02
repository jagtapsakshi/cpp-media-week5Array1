#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elelment:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    bool flag = false; // check mark

    for(int i=0;i<=n-1;i++){ //array of ele starting from 0
        for(int j=i+1;j<=n-1;j++) //array of ele starting from 1

        if(arr[i] == arr[j]){ // 
            flag = true;
            cout<<arr[i]<<endl;
            
            
        }
    }
    if(flag == false){
        cout<<"no duplicates";
    }
    else cout<<"duplicates"; 
    
}  
