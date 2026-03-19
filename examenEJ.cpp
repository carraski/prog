// Te pide que pongas que hace el código
#include <iostream>
using namespace std;

int main () {
    int i,num,j;
    cout << "dame un número\n";
    cin >> num;
    if(num%2==0){
        cout << "si" << num <<"\n";
    }
    for(int j=2; j<num; j+=2){
        cout << j << "\n";
    }
}