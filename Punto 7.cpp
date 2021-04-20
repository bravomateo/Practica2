#include <iostream>

using namespace std;

int size (char[]);

int main() {

    int cnt =0;
    int c = 0;
    char cad[30];
    char cadv[30]{};

    cout<<"Ingrese la cadena 1: ";
    cin>>cad;

    for (int i=0; i<size(cad); i++){
        cnt =0;
        for(int k=(i-1) ;k>=0; k--){
            if (cad[i]==cad[k]){
                cnt++;
            }
        }
        if(cnt==0){
            cadv[c]=cad[i];
            c++;
        }
    }

    cout<<endl;
    cout<<"Original: "<<cad<<endl;
    cout<<"Sin repetidos: "<<cadv<<endl;
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


