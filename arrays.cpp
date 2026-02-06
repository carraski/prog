#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Dime cuantos números quieres guardar\n";
    cin >> num;
    int valores[num];
    int x = 0;
    while (x < num) {
        cout << "Dame el número " << x << "\n";
        cin >> valores[x];
        x++;
    }
    int j = 0;
    while (j < num) {
        cout << "valor " << j << " es " << valores[j] << "\n";
        j++;
    }
    return 0;
}

