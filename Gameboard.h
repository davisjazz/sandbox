/*
 * Gameboard.h
 *
 *  Created on: 07.03.2019
 *      Author: mo
 */

#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_

class Gameboard {
    std::string gameSpace[4][4];
    char chr;
    public:
        Gameboard(); //initialize the board with '-' in all 16 spaces
        void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
        std::string getGameSpace(int row,int column);
        int findFour(char chr); //four 'x's in any row 'wins'
        void printInfo(); //print the game board in a 4x4 matrix
        void updateBoard(std::string str0, char symbol);
};

#endif /* GAMEBOARD_H_ */