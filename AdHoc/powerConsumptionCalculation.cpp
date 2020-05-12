#include <iostream>
using namespace std;
int main()
{
    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    n = n*2;
    int periods[n];
    int consumingP1 = 0, consumingP2 = 0, consumingP3 = 0;
    int powerConsumed = 0;
    for(int j = 0; j<n; j++){
        cin >> periods [j];
        }
    for(int i = 0; i<n; i = i + 2){
        consumingP1 = consumingP1 + (periods[i+1] - periods [i]);
        if(i+2 < n){
            int aux = periods[i+2] - periods[i+1];
            if(aux>t1){
                if(aux > (t1 + t2)){
                    consumingP2 += t2;
                    consumingP3 =consumingP3 + (aux - (t1 + t2));
                } else {
                    consumingP2 = consumingP2 + (aux - t1);
                }
                
                consumingP1 = consumingP1 + t1;
            } else {
                consumingP1 = consumingP1 + aux;
            }
        }
    }
    
    powerConsumed = (consumingP1 * p1) + (consumingP2 * p2) + (consumingP3 * p3);
    
    cout << powerConsumed << endl;

    return 0;
}
