#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    do {
        cout << "Enter name: ";
        cin >> name;
        cout << endl;
        cout << name << endl;
    } while (name != "sit");
    return 0;
}
/*
OUTPUT:
Enter name: Adrish

Adrish
Enter name: Aditya

Aditya
Enter name: sit

sit
*/
