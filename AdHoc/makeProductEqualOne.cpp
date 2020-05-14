#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
    int n = 0;
    scanf("%lld",&n);
    long long number = 0;
    long long coins = 0;
    unsigned long long negative = 0;
    unsigned long long zeros = 0;
    for(int i = 0; i<n; i++){
        scanf("%lld",&number);
        if(number>1){
            coins = coins + (number-1);
        } else if(number==0){
            zeros++;
        } else if(number < -1){
           coins = coins + ((number+1) * -1);
           negative++;
        } else if (number==-1) {
           negative++;
        } 
    }
    if(zeros>0){
        coins += zeros;
    } else{
        if(negative%2!=0){
            coins += 2;
        }
    }
    
    printf("%lld",coins);

    return 0;
}