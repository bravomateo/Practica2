#include <iostream>

using namespace std;

int size (char[]);

int main() {

    int cn = 0;
    int cc = 0;
    char cad[30];
    char cadvn[30]{};
    char cadvc[30]{};

    cout<<"Ingrese la cadena: ";
    cin>>cad;

    for (int i=0; i<size(cad); i++){

        if (cad[i]<58 && cad[i]>47){
            cadvn[cn] = cad[i];
            cn++;
        }
        else{
            cadvc[cc] = cad[i];
            cc++;
        }
    }
    cout<<endl;
    cout<<"Original: "<<cad<<endl;
    cout<<"Texto: "<<cadvc<<". Numero: "<<cadvn<<endl;
    cout<<endl;

    return 0;

}

int size (char cade[]){
    int pal=0;
    for (int i=0; cade[i]!='\0';++i){
        pal++;
    }
    return pal;
}


