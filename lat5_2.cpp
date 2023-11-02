#include<iostream>
using namespace std;

int main(){

    int i;

    for(i = 0; i < 10; i++){
        if(i == 4){
            cout << "Bilangan : " << i << endl;
            continue;
        }if(i == 6){
            break;
        }
    }

    return 0;
}