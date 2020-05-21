#include <iostream>
using namespace std;
unsigned long long subStrings(long long n){
    long long answer = (n*(n+1)/2);
    return answer;
}

int main(){
    int n, k;

    cin >> n >> k;
    
    char word[n];
    char lettesLeft[k];
    bool typedChars[n];

    for(int i = 0; i < n; i++){
        cin >> word[i];
    }
    
    for(int i = 0; i<n;i++){
        typedChars[i] = false;
    }

    for(int i = 0; i<k;i++){
        cin >> lettesLeft[i];
    }

    for(int i = 0; i < k; i++){
        for(int j = 0; j<n;j++){
            if(word[j]==lettesLeft[i]){
                typedChars[j] = true;
            }
        }
    }

    //funcionando até aqui

    unsigned long long answer = 0;
    long long wordLength = 0;
    for(int i = 0; i < n; i++){
        if(typedChars[i]){
            wordLength++;
        } else if(wordLength>0){
            unsigned long long aux = subStrings(wordLength);
            answer += aux;
            wordLength = 0;
        }
    }
    if(wordLength > 0){
        unsigned long long aux = subStrings(wordLength);
        answer += aux;
    }
    cout << answer;
    return 0;
}