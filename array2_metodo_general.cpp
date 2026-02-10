#include <iostream>
using namespace std;
int main() {
    int num[]={1,2,3,4,5};
    int maximo=num[0]; 
    for (int i=1;i<5; i++){
    if (num[i] > maximo){
    maximo = num[i];
        }
        }
        cout << "el valor máximo es: " << maximo;
    int minimo=num[0];
    for (int i=1; i>2; i){
    if (num[i] <minimo){
    minimo = num[i];
    }    
    }
        cout << ", el valor mínimo es:" << minimo;
    return 0;
}
