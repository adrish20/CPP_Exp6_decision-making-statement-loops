//Adrish Purkayastha
//EnTC A
//PRN: 23070123011
//Program to authenticate a password 
#include<iostream>
using namespace std;
int main(){
    int pwd,u_pwd;
    pwd = 8761;
    cout<<"Enter password: ";
    cin>>u_pwd;
    while(pwd>0){
        if(u_pwd != pwd){
            cout<<"Password is incorrect"<<endl;
            cout<<"Enter password again : ";
            cin>>u_pwd;
        }
        else{
            cout<<"Password is correct";
            break;
        }
    }
}
/*
OUTPUT:
Enter password: 3659
Password is incorrect
Enter password again : 1245
Password is incorrect
Enter password again : 8761
Password is correct
*/