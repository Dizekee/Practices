#include <iostream>
#include <string>
using namespace std;

int main() {
    int sergey = 0;
    int dima = 0;
    int quantityCards;
    
    cin >> quantityCards;
    
    int cards[quantityCards];
    
    for (int i = 0; i < quantityCards; i++) {
        cin >> cards[i];
    }
    
    int left = 0, right = quantityCards - 1;
    bool isSergeyTurn = true;
    
    while (left <= right) {
        int chosenCard;
        if (cards[left] > cards[right]) {
            chosenCard = cards[left];
            left++;
        } else {
            chosenCard = cards[right];
            right--;
        }
        
        if (isSergeyTurn) {
            sergey += chosenCard;
        } else {
            dima += chosenCard;
        }
        
        isSergeyTurn = !isSergeyTurn;
    }
    
    cout << sergey << " " << dima << endl;
    
    return 0;
}