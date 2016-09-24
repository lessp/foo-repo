//
//  Card.h
//  cardDeck
//
//  Created by Tom Ekander on 15/09/16.
//  Copyright © 2016 Tom Ekander. All rights reserved.
//

#ifndef Card_h
#define Card_h

#include <string>
#include <vector>
#include <array>
#include <cmath>
#include "Deck.h"

class Card
{
    
public:
    
    enum CardRank
    {
        RANK_2,
        RANK_3,
        RANK_4,
        RANK_5,
        RANK_6,
        RANK_7,
        RANK_8,
        RANK_9,
        RANK_10,
        RANK_JACK,
        RANK_QUEEN,
        RANK_KING,
        RANK_ACE,
        MAX_RANKS
    };
    
    enum CardSuit
    {
        SUIT_HEARTS,
        SUIT_DIAMONDS,
        SUIT_SPADES,
        SUIT_CLUB,
        MAX_SUITS
    };
    
    Card (CardRank newCardRank, CardSuit newCardSuit)
    :  rank (newCardRank), suit (newCardSuit)
    {
    }
    
    void printCard() const
    {
        switch (rank)
        {
            case RANK_2:     { std::cout << "2"; break; }
            case RANK_3:     { std::cout << "3"; break; }
            case RANK_4:     { std::cout << "4"; break; }
            case RANK_5:     { std::cout << "5"; break; }
            case RANK_6:     { std::cout << "6"; break; }
            case RANK_7:     { std::cout << "7"; break; }
            case RANK_8:     { std::cout << "8"; break; }
            case RANK_9:     { std::cout << "9"; break; }
            case RANK_10:    { std::cout << "10"; break; }
            case RANK_JACK:  { std::cout << "J"; break; }
            case RANK_QUEEN: { std::cout << "Q"; break; }
            case RANK_KING:  { std::cout << "K"; break; }
            case RANK_ACE:   { std::cout << "A"; break; }
        }
        
        switch (suit)
        {
            case SUIT_HEARTS:   { std::cout << "H"; break; }
            case SUIT_DIAMONDS: { std::cout << "D"; break; }
            case SUIT_SPADES:   { std::cout << "S"; break; }
            case SUIT_CLUB:     { std::cout << "C"; break; }
        }
    }
    
    int getCardValue() const
    {
        switch (rank)
        {
            case RANK_2:     { return 2; break; }
            case RANK_3:     { return 3; break; }
            case RANK_4:     { return 4; break; }
            case RANK_5:     { return 5; break; }
            case RANK_6:     { return 6; break; }
            case RANK_7:     { return 7; break; }
            case RANK_8:     { return 8; break; }
            case RANK_9:     { return 9; break; }
            case RANK_10:    { return 10; break; }
            case RANK_JACK:  { return 10; break; }
            case RANK_QUEEN: { return 10; break; }
            case RANK_KING:  { return 10; break; }
            case RANK_ACE:   { return 11; break; }
        }
        
        return 0;
    }
    
    CardRank getRank() const { return rank; }
    CardSuit getSuit() const { return suit; }
    
    
private:
    
    CardRank rank;
    CardSuit suit;
};


#endif /* Card_h */
