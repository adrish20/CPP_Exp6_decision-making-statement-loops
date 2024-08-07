//Adrish Purkayastha
//EnTC A
//PRN:23070123011
//Code to print inverted floyd series
#include <iostream>
using namespace std;
int main(){
    int i,j,k=5,x=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j>=k){
                cout<<x;
                x++;
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
    1
   23
  456
 78910
1112131415
*/