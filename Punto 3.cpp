#include <iostream>

using namespace std;

int size (char[]);

bool verifpal(char[],char[]);

int main() {
    char cad1[30];
    char cad2[30];

    cout<<"Ingrese la cadena 1: ";
    cin>>cad1;

    cout<<"Ingrese la cadena 2: ";
    cin>>cad2;
    cout<<endl;

    if(verifpal(cad1,cad2)==true){
        cout<<cad1<<" y "<<cad2<<" son iguales"<<endl;
        cout<<endl;

    }
    else{
        cout<<cad1<<" y "<<cad2<<" son diferentes"<<endl;
        cout<<endl;
    }

    return 0;
}


int size (char cade[]){
    int pal=0;
    for (int i=0; cade[i]!='\0';++i){
        pal++;
    }
    return pal;
}

bool verifpal(char pal1[],char pal2[]){
    int  c = 0;

    if (size(pal1)==size(pal2)){

        for(int i=0; i<size(pal1); i++){

            if(pal1[i]==pal2[i]){
                c++;
            }
        }

        if(c==size(pal1)){
            return true;
        }
        else{
            return false;
        }
    }

    else{
       return false;
    }
}

