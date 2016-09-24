//
//  Deck.h
//  cardDeck
//
//  Created by Tom Ekander on 15/09/16.
//  Copyright © 2016 Tom Ekander. All rights reserved.
//

#ifndef Deck_h
#define Deck_h

#include <string>
#include <vector>
#include <array>
#include <cmath>
#include "Card.h"

class Deck
{
    
public:
    
    Deck()
    {
        fillDeck();
    }
    
    void printDeck()
    {
        for (auto i = 0; i < cardDeck.size(); ++i) {
            cardDeck.at(i).printCard();
            std::cout << '\n';
        }
        
        std::cout << '\n';
    }
    
    void fillDeck()
    {
        int card = 0;
        for (auto rank = 0; rank < Card::MAX_RANKS; ++rank)
            for (auto suit = 0; suit < Card::MAX_SUITS; ++suit)
            {
                cardDeck.push_back (Card(static_cast<Card::CardRank>(rank),
                                         static_cast<Card::CardSuit>(suit)));
                ++card;
            }
    }
    
    void swapCard (Card &firstCard, Card &secondCard)
    {
        Card tempCardHolder = firstCard;
        firstCard = secondCard;
        secondCard = tempCardHolder;
    }
    
    int getRandomCard()
    {
        return rand() % 52;
    }
    
    void shuffleDeck()
    {
        for (auto i = 0; i < 52; ++i) {
            swapCard(cardDeck.at(i), cardDeck[getRandomCard()]);
        }
    }
    
private:
    
    std::vector<Card> cardDeck;
    
};


#endif /* Deck_h */
