#include <iostream>

using namespace std;


int artoni (char[],int);

int size (char[]);

int pot (int);

int main() {

    char num[30];
    cout<<"Ingrese los numero a separar: ";
    cin>>num;

    int n;
    cout<<"Ingrese el numero n: ";
    cin>>n;

    if(n==0){
        n=1;
        cout<<"No es posible hacer grupos de 0, el numero se aprixmo a 1"<<endl;
    }

    int lim = size(num)-1;
    int s = 0;
    int i = 1;
    int ki = 0;

    if (size(num)%n == 0){
        ki = size(num)/n;
    }
    else{
        ki = size(num)/n + 1;
    }

    int acu =0;
    int ap = 0;
    char vacio[1] = {'0'};
    int exp = 0;

    for (int l=1; l<ki+1; l++){

        for (int k = lim-s*n ; k>lim-i*n ; k--){
            if (k>=0){
                vacio[0]=num[k];
                ap = artoni(vacio,1);
                acu = acu + ap*pot(exp);
                exp++;
            }
        }
        s = s+1;
        i = i+1;
        exp = 0;
    }

    cout<<endl;
    cout<<"Original: "<<num<<endl;
    cout<<"Suma: "<<acu<<endl;
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

int artoni (char cad[],int l){
    int n=0;
    for (int i=0;i<l;i++){
        n = n*10-48+cad[i];
    }
    return n;
}

int pot (int n){
    if(n==0){
        return 1;
    }
    else{
        int p = 1;
        for(int i=0; i<n;i++){
            p = p*10;
        }
        return p;
    }
}
