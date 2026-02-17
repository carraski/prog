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
int menor, posmenor, temp;
    for(int i=0;i<num-1;i++){
         // definimos el intervalo a usar para la busqueda (i--> num) y luego pasamos el valor encontrado a la posicion inicial.
        menor=a[i]; posmenor=i;
        // Vamos a buscar el menor del intervalo [i -->num]
        for(int j=i; j<num; j++){
            if (a[j]<menor){
                menor=a[j];posmenor=j;
            }
        }
            // pasamos el valor encontrado como menor en el intervalo [i -->num]
            // a la posicion "i"
        temp=a[i];
        a[i]=a[posmenor];
        a[posmenor]=temp;
    }
    int k=0;
    while (k<num){
        cout << a[k]<<" ";
        k++;
    }
}