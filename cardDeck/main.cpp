// Example program
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <cmath>
#include "Deck.h"
#include "Card.h"

int main()
{
    
    srand(static_cast<unsigned int>(time(0)));
    
    Deck cardDeck;
    
    cardDeck.printDeck();
    cardDeck.shuffleDeck();
    cardDeck.printDeck();
    
    return 0;
}
