#include <iostream>

using namespace std;


int main() {

    float p0, p1, p2, p3, p4, ps;
    float gal[6][8] = {{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0}};
    int acu =0;

    for(int i=0; i<6; i++){

        for (int j=0; j<8; j++){

            if(i-1 == -1){
                if(j-1 == -1){
                    p0 = gal[i][j];
                    p2 = gal[i][j+1];
                    p4 = gal[i+1][j];

                    ps = (p0+p2+p4)/5;

                    if(ps>6){
                        acu++;
                    }
                }

                else if(j+1 == 8){
                    p0 = gal[i][j];
                    p1 = gal[i][j-1];
                    p4 = gal[i+1][j];

                    ps = (p0+p1+p4)/5;
                    if(ps>6){
                        acu++;
                    }
                }
                else{
                    p0 = gal[i][j];
                    p1 = gal[i][j-1];
                    p2 = gal[i][j+1];
                    p4 = gal[i+1][j];

                    ps = (p0+p1+p2+p4)/5;
                    if(ps>6){
                        acu++;
                    }
                }
            }

            else if(i+1 == 6){

                if(j-1 == -1){
                    p0 = gal[i][j];
                    p2 = gal[i][j+1];
                    p3 = gal[i-1][j];

                    ps = (p0+p2+p3)/5;
                    if(ps>6){
                        acu++;
                    }
                }

                else if(j+1==8){
                    p0 = gal[i][j];
                    p1 = gal[i][j-1];
                    p3 = gal[i-1][j];

                    ps = (p0+p1+p3)/5;
                    if(ps>6){
                        acu++;
                    }
                }

                else{
                    p0 = gal[i][j];
                    p1 = gal[i][j-1];
                    p2 = gal[i][j+1];
                    p3 = gal[i-1][j];

                    ps = (p0+p1+p2+p3)/5;
                    if(ps>6){
                        acu++;
                    }
                }
            }

            else{
                if(j-1 == -1){
                    p0 = gal[i][j];
                    p2 = gal[i][j+1];
                    p3 = gal[i-1][j];
                    p4 = gal[i+1][j];

                    ps = (p0+p2+p3+p4)/5;
                    if(ps>6){
                        acu++;
                    }
                }

                else if(j+1 == 8){
                    p0 = gal[i][j];
                    p1 = gal[i][j-1];
                    p3 = gal[i-1][j];
                    p4 = gal[i+1][j];

                    ps = (p0+p1+p3+p4)/5;
                    if(ps>6){
                        acu++;
                    }
                }

                else{
                    p0 = gal[i][j];
                    p1 = gal[i][j-1];
                    p2 = gal[i][j+1];
                    p3 = gal[i-1][j];
                    p4 = gal[i+1][j];

                    ps = (p0+p1+p2+p3+p4)/5;
                    if(ps>6){
                        acu++;
                    }
                }
            }
        }
    }
    cout<<"La cantidad de estrellas son: "<<acu<<endl;
    return 0;

}
