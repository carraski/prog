#include <iostream>
using namespace std;
int main() {
    cout << "¿Qué quieres que te diga? (1, 2 o 3)\n";
    int opcion;
    int i;
    cin >> opcion;
     if(opcion == 1){
     i=0;
    while(i<6){
        cout << "Buenos días estrellita\n";
i=i+1;
    }
    }
    
    else if(opcion == 2){
      int v;
    v=0;
     while(v<1299){
        cout << "Eres super guapo, inteligente y buena persona, Raúl\n";
 v=v+1;
    }
}
    else if(opcion == 3){
     int a;
    a=0;
    while(a<728){
        cout << "Informatica se me da muy bien\n";
a=a+1;
    }
     }
    else{
        cout << "Aprende a hacer lo que te dicen\n";
}
    return 0;
}
