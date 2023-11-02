#include<iostream>
using namespace std;

int main(){

    int i;
    
    cout << "Ini adalah bilangan ganjil" << endl;
    for(i = 1; i <= 35; i += 2){
        cout << i << endl;
    }

    cout << "\nIni adalah bilangan genap" << endl;
    for(i = 2; i <= 36; i += 2){
        cout << i << endl;
    }

}