#include <iostream>

using namespace std;


void intoch(int n, char cadena[]);


int main() {
    // cadena en particular
    int n = 12881;
    char cad[20];


    intoch(n,cad);
    cout << "La cadena es: " << cad << endl;

    return 0;
}

void intoch(int n, char cadena[]){

    int size = 0;
    int tmp = n;

    while (tmp > 0){
        tmp = tmp/10;
        size++;
    }

    cadena[size] = '\0';
    tmp = n;
    int pos = size-1;
    int dig;

    while (pos >= 0){
        dig = tmp%10;
        tmp = tmp/10;
        cadena[pos] = dig + 48;
        pos --;
    }
}

