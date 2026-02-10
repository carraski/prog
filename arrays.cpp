#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Dime cuantos números quieres guardar\n";
    cin >> num;
    int valores[num];
    int i = 0;
    while (i < num) {
        cout << "Dame el número " << i << "\n";
        cin >> valores[i];
        i++;
    }
    int j = 0;
    while (j < num) {
        cout << "valor " << j << " es " << valores[j] << "\n";
        j++;
    }
    return 0;
}

