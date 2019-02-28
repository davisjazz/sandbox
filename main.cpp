/* main.cpp
 *  Created on: 28.02.2019
For this programming quiz, I would like you to create a game called TicTacToe.
In this version of the game you will need to:
 1. Create a 4x4 game board
 2. Prompt the first user (the 'x' user) to enter their name
 3. Prompt the second user (the 'o' user) to enter their name
 4. Prompt the 'x' user to select a grid position where they would like to place an 'x'.
 5. Prompt the 'o' user to select a grid position where they would like to place an 'o'.
 6. After each user has a turn, check for any row, column, diagonal that has 4 'x's or 4 'o's.
    - If 4 'x's are found in the same col, row, diagonal, declare the 'x' user the winner.
    - If 4 'o's are found in the same col, row, diagonal, declare the 'o' user the winner.
    - End the game and declare the winner.
    - If the grid is filled (each player gets 8 turns) and there is not a row, column, diagonal
with 4 of the same symbol, the game is tied. Declare a tie game.
*/

#include "main.hpp"
#include "User.cpp"
#include "Gameboard.cpp"

int main() {
    int    count=1, out=1;
    string str0 ="";
    //Create a 4x4 game board
    Gameboard game;
    //Prompt users to enter their name
    usrs players;
    players = create_2user();
    //Create list, list iterator
    list<User> playerList = { players.usr0, players.usr1 };
    //Play until there is a winner or the gird is filled
    while((count < 16)&&(out != 0)) {
        for( User& usr : playerList ) {
            //Prompt users to select a grid position
            cout<<"\n       "<< usr.get_name() <<", select a grid position: \n";
            cout<<"\n"; game.printInfo(); cout<<"\n > ";
            cin>>str0;
            //update the gameboard after converting str0 into coordinate ( i, j )
            game.updateBoard(str0, usr.get_symbol());
            //check if four symbols are aligned:
            if ( game.findFour(usr.get_symbol())==1 ) {
                cout<<"\n"<<usr.get_name() <<" WINS!\n";
                out=0; break; }
            else if( count >= 16 ) {
                cout<<"\nThe game is tied\n";
                game.printInfo();
                out=0; break; }
            ++count;
        }
    }
   return 0;
}

