#include <iostream>
using namespace std;
int main(){

    int t;
    cin >> t;
    int candies[t];
    int kids[t];
    
    for(int i = 0; i<t; i++){
        cin >> candies[i] >> kids [i];
        int evenDivide = candies[i]/kids[i];

        int leftOver = candies[i] - (evenDivide*kids[i]);
        //cout << leftOver << endl;
        if(leftOver <= kids[i]/2){
            //cout << evenDivide <<" "<< kids[i] << " " << leftOver << endl;
            cout << (evenDivide*kids[i]) + leftOver << endl;
        } else if(leftOver == 0){
            cout << candies[i] << endl;
        } else{
            cout << (kids[i]/2) + (evenDivide*kids[i]) << endl;
        }

    }

    return 0;
}
