#include <iostream>
using namespace std;
int main(){
    int n;

    cin >> n;
    int reachable = 0;
    bool finished = false;

    while (!finished)
    {
        n++;
        reachable++;
        if(n>10){
            while (n%10==0){
                n/=10;
            }
        } else{
            reachable = reachable + 8;
            finished = true;
        }
        
    }

    cout << reachable;
    

    return 0;
}