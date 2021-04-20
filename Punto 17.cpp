#include <iostream>

using namespace std;

int sumadiv (int);

int namigos(int, int);


int main() {

    int n=0, acu = 0;
    cout << "Escriba el numero limite: ";
    cin >> n;

    for (int i=200; i<n ; i++){
        for(int k=200 ; k<n; k++){
            if( k != i && namigos(i,k)==1){
                cout << i << endl;
                acu += i;
            }
        }
    }

    cout << "El resultado de la suma es: " << acu << endl;

}



int sumadiv (int n){
    int acu = 0;

    for(int i=1; i< (n/2)+1; i++){
        if( n%i == 0){
            acu = acu + i;
        }
    }
    return acu;
}

int namigos(int n1, int n2){
    if(sumadiv(n1) == n2 && sumadiv(n2) == n1){
        return 1;
    }
    else{
        return 0;
    }
}

