#include<iostream>
using namespace std;

int main(){

    int n;
    int f_n;
    int f_n1;
    int f_n2;

    cout << "FIBONACCI" << endl;
    

    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    cout << f_n << endl;

    for(int i = 0; i <= 9; i ++){

        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;

        cout << f_n << endl;
        
    }

    return 0;
}