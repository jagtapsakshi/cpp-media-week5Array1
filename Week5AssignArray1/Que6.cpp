#include <iostream>
using namespace std;

    int main(){
        
    int sub[50], i ;
    for ( i = 0 ; i <= 48 ; i++ ) { 
    sub[i] = i ;
    cout<<sub[i]<<endl ;
    }
}
 /*ANS :   
1 
2 
3 
.
.
.
48
*/
/* To get solution as 49 cout should be writen outside the for loop.
    
    int main(){
    int sub[50], i ;
    for ( i = 0 ; i <= 48 ; i++ ) { 
    sub[i] = i ;
    }
    cout<<sub[i]<<endl ;
    }
*/