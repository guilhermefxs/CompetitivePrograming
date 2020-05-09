#include <iostream>
#include <string>
using namespace std;
int main(){

    string num1, num2;
    cin >> num1 >> num2;
    int size = num1.size();

    for(int i = 0; i<size; i++){
        if(num1.at(i)==num2.at(i)){
            num1.at(i) = '0';
        } else {
            num1.at(i) = '1';
        }
    }
    cout << num1;
    return 0;
}