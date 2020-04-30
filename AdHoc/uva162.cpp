#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<string> dealer;
stack<string> firstToPlay;
stack<string> mainStack;
bool cover(int player, int numCards)
{
    if (player == 0)
    {
    }
    return false;
}

void empty(int winner){
    if(winner==0){
        while(!dealer.empty()){
            dealer.pop();
        }
    } else {
        while(!firstToPlay.empty()){
            firstToPlay.pop();
        }
    }
    while(!mainStack.empty()){
        mainStack.pop();
    }
}

int main()
{

    string card;
    cin >> card; //pego a primeira carta do baralho
    int numCards = 0;
    while (card != "#")
    {
        while (numCards != 51)
        { //loop pra distribuir as cartas entre os jogadores
            if (numCards % 2 == 0)
            {
                dealer.push(card);
            }
            else
            {
                firstToPlay.push(card);
            }
            cin >> card; //pego a proxima carta
            numCards++;
        }

        string topCard = firstToPlay.top();
        firstToPlay.pop();
        mainStack.push(topCard);
        int player = 1;   // int pra saber qual e o jogador da vez
        bool win = false; //bool pra saber se já houve um ganhador

        while (!win) {
            if(player==1){
                if((topCard.at(1)>50 && topCard.at(1)<58) || topCard.at(1)=='10'){
                    if(!dealer.empty()){
                        topCard = dealer.top();
                        dealer.pop();
                        mainStack.push(topCard);
                    } else{
                        win = true;
                        cout << "1 " << firstToPlay.size() << endl;
                    }
                } else if (topCard.at(1) == 'J') {
                    cover(0, 1);
                } else if (topCard.at(1) == 'Q'){
                    cover(0, 2);
                } else if (topCard.at(1) == 'K'){
                    cover(0, 3);
                } else if (topCard.at(1) == 'A') {
                    cover(0, 4);
                } 
            } else if(player==0){
                if((topCard.at(1)>50 && topCard.at(1)<58) || topCard.at(1)=='10'){
                    if(!dealer.empty()){
                        topCard = firstToPlay.top();
                        firstToPlay.pop();
                        mainStack.push(topCard);
                    } else{
                        win = true;
                        cout << "0 " << dealer.size() << endl;
                    }
                } else if (topCard.at(1) == 'J') {
                    cover(1, 1);
                } else if (topCard.at(1) == 'Q'){
                    cover(1, 2);
                } else if (topCard.at(1) == 'K'){
                    cover(1, 3);
                } else if (topCard.at(1) == 'A') {
                    cover(1, 4);
                }
            }
        }

        cin >> card; //pego a primeira carta do proximo baralho pra ver se nao eh #
        numCards = 0;
    }
}