#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Dime cuantos números quieres ordenar\n";
    cin >> num;
    int a[num];
    for(int i=0; i<num; i++){
    cout <<"Dame el siguiente numero ("<<i<<")";
    cin >> a[i];
    }

    bool cambio;
    // bool es el tipo de variable que solo puede ser verdadero o falso.
    //aqui lo uso para que pare si no hay cambio en la secuencia o que siga si lo hay.
    int temp;
    do{
        cambio = false;
        for(int i=0; i<num; i++)
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                cambio=true;
            } 
        }while(cambio);
 int k=0;
    while (k<num){
        cout << a[k]<<" ";
        k++;
    }
}