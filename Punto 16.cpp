#include <iostream>

using namespace std;


int main() {


    long long int dim, num = 1, den = 1, caminos=0;

    cout << "Ingrese la dimesion de la malla: ";
    cin >> dim;

    for(int i = dim*2; i>dim; i--){
        num *= i;
    }

    for(int k = dim; k>1; k--){
        den *= k;
    }

    caminos = num/den;

    cout <<"Para una malla de: " <<dim<<"x"<<dim<<" puntos hay "<<caminos<<" caminos"<< endl;

    return 0;

}

