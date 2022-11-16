#include <iostream>
#include <list>
#include <string>  

using namespace std;

struct Card {
    string card_name;
    string suit;
    int skill_level;
};

int currentCard_name = 13;
string currentCard = " ";

int currentSuit = 4;
string currentSuit_name = " ";

int main() {
    int score = 0;

    srand(time(NULL));

    string card_name[] = { "Two",  "Three", "Four", "Five", "Six",
                          "Seven", "Eight", "Nine", "Ten",  "Jack",
                          "Queen", "King",  "Ace" };
    string suit[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

    string tempName = card_name[rand() % currentCard_name];
    currentCard = tempName;

    string tempSuit = suit[rand() % currentSuit];
    currentSuit_name = tempSuit;

    cout << "Your score is = " << score << "\n";

    //The Cheat Answer printed to user
    string card = tempName + " of " + tempSuit;

    cout << card << "\n";

    cout <<"Please guess the card number or name (for example...Ace, One, Two, Jack etc...)" << "\n";

    string userNumber;
    cin >> userNumber;
    userNumber[0] = toupper(userNumber[0]);

    cout << "Please guess the card suit (for example Hearts, Clubs... etc)" << "\n";
    string userSuit;
    cin >> userSuit;
    userSuit[0] = toupper(userSuit[0]);

    if (userNumber + userSuit == tempName + tempSuit) {
        score++;
        cout << "You guessed correct!! " << "Your score is = " << score << "\n";
    }
    else {
        cout << "Your guess was wrong... " << "\n";
    }



    return 0;
}