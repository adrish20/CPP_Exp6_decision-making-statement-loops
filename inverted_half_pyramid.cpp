//Adrish Purkayastha
//EnTC A
//PRN:23070123011
//Code to print inverted half pyramid star pattern
#include<iostream>
using namespace std;
int main(){
    int k=5;
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j>=k){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        k--;
        cout<<endl;
    }
}
/*
OUTPUT:
    *
   **
  ***
 ****
*****
*/