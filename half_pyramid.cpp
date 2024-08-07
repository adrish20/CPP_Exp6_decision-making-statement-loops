//Adrish Purkayastha
//EnTC A
//PRN:23070123011
//Code to print half pyramid star pattern
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
            
        }
        cout<<endl;
    }
}
/*
OUTPUT:
* 
* *
* * *
* * * *
* * * * *
*/