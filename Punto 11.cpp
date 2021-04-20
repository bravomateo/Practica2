#include <iostream>

using namespace std;

int selfila(int);

void imprimir(int arreglo[15][20]);

int main() {

    int cine [15][20]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
    int opcion = 1;
    int sillar;
    int fila;
    char filar;

    while(opcion==1){

        int selmenu;
        cout << " +------------------------------------------+" <<endl;
        cout << " +                    MENU                  +" <<endl;
        cout << " +------------------------------------------+" <<endl;
        cout << " +  1. Reservas                             +" <<endl;
        cout << " +  2. Cancelaciones                        +" <<endl;
        cout << " +  3. Mostrar silla disponibles y ocupadas +" <<endl;
        cout << " +------------------------------------------+" <<endl;
        cout << endl;
        cout << "Seleccione una opcion del menu: ";
        cin >> selmenu;


        if (selmenu == 1){

            cout << endl;
            cout << " +--------------------------+" <<endl;
            cout << " +      Reservar sillas     +" << endl;
            cout << " +--------------------------+" <<endl;
            cout << endl;

            cout << "Ingrese la fila que quiere reservar: ";
            cin >> filar;
            fila = selfila(filar);

            cout << "Ingrese el asiento que quiere reservar: ";
            cin >> sillar;

            cine[fila-1][sillar-1] = 1;

            imprimir(cine);
        }

        if (selmenu == 2){
            cout << endl;
            cout << " +--------------------------+" <<endl;
            cout << " +      Cancelar sillas     +" << endl;
            cout << " +--------------------------+" <<endl;
            cout << endl;

            cout << "Ingrese la fila que quiere cancelar: ";
            cin >> filar;
            fila = selfila(filar);

            cout << "Ingrese el asiento que quiere cancelar: ";
            cin >> sillar;

            cine[fila-1][sillar-1] = 0;

            imprimir(cine);
        }


        if(selmenu == 3){
            cout <<endl;
            cout << "Asientos disponibles (-) y reservadas (+)" <<endl;
            imprimir(cine);

        }
        cout << endl;
        cout << "1. Para ver las opciones del menu" <<endl;
        cout << "0. Para salir del programa"<<endl;
        cout << endl;
        cout << "Ingrese su opcion: ";
        cin>> opcion;

    }
    return 0;

}


int selfila(int f){

    switch (f) {
        case 65:return 1;break;
        case 66:return 2;break;
        case 67:return 3;break;
        case 68:return 4;break;
        case 69:return 5;break;
        case 70:return 6;break;
        case 71:return 7;break;
        case 72:return 8;break;
        case 73:return 9;break;
        case 74:return 10;break;
        case 75:return 11;break;
        case 76:return 12;break;
        case 77:return 13;break;
        case 78:return 14;break;
        case 79:return 15;break;
    default: return 0;break;
    }
}


void imprimir(int arreglo[15][20]){

    cout << endl;
    for(int i=0 ; i<15 ; i++){
        for(int k=0 ; k<20 ; k++){
            if( arreglo[i][k]==1){
                cout << " + ";
            }
            else{
                cout << " - ";
            }
        }
    cout<<endl;
    }
}
