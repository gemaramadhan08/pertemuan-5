#include<iostream>
using namespace std;

int main(){

    int n = 1;
    cetak:

    cout << "C++ sangat mudah" << endl;

    if(n++ < 10){
        goto cetak;
    }

    return 0;
}