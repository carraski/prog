#include <iostream>
using namespace std;
void Dame(int num, int *a){
     for(int i=0; i<num; i++){
    cout <<"Dame el siguiente numero ("<<i<<")";
    cin >> a[i];
    }
}
void Ordename (int num, int *a){
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
        
    }
}
void Sacalos (int num, int *a){
    int cambio;
   while(cambio);
 int k=0;
    while (k<num){
        cout << a[k]<<" ";
        k++;
    }
}
int main (){
    int num;
    cout << "dime cuantos numeros me vas a dar";
    cin >>num;
    int a[num];
    Dame(num, &a[0]);
    // acordarse de que & iba relacionado a la direccion de memoria
    Ordename (num, &a[0]);
    Sacalos (num, &a[0]);
}