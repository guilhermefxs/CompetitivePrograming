#include <iostream>

using namespace std;
int main(){

    int sideLenght;
    
    cin >> sideLenght;
    string cake[sideLenght];
    int aux = 0;
    while(aux<sideLenght){
        cin >> cake[aux];
        aux++;
    }
    int pairs = 0;
    for(int i = 0; i<sideLenght; i++){
        for(int j = 0; j<sideLenght; j++){
            if(cake[i].at(j)=='C'){
                int nextAtColumm = i+1, nextAtRow = j+1;
                while(nextAtRow<sideLenght){
                    if(cake[i].at(nextAtRow)=='C'){
                        pairs++;
                    }
                    nextAtRow++;
                }
                while(nextAtColumm<sideLenght){
                    if(cake[nextAtColumm].at(j)=='C'){
                        pairs++;
                    }
                    nextAtColumm++;
                }
            }
        }
    }

    cout << pairs;

    return 0;
}