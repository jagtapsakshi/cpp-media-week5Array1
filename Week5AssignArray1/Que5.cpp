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

    int x=0;
    bool flag=false;

    for(int i=0;i=+n-1;i++){
        if(arr[i]!= x){
            cout<<x<<endl;
            flag=true;
            break;
        }
    else x++;
    }
    if(flag==false) 
    cout<<x<<endl;
}
