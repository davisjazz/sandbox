/* Gameboard.cpp
 *  Created on: 28.02.2019 */

/* ----------- class Gameboard -------------------------------------- */
Gameboard::Gameboard() { //define the constructor
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            gameSpace[i][j] = std::to_string( (i+1)*10 + (j+1) );
            //test0: OK - diag0 - if(i==j) { gameSpace[i][j] = "x"; }
            //test1: OK - diag1 - if(i==(3-j)) { gameSpace[i][j] = "x"; }
            //test2: OK - row - gameSpace[1][j] = "x";
            //test3: OK - col - gameSpace[i][1] = "x";
        }
    }
}

void Gameboard::setGameSpace(int row, int column, char value) { gameSpace[row][column] = value;} //mutator method
string Gameboard::getGameSpace(int row, int column) { return gameSpace[row][column];} //accessor method

void Gameboard::printInfo() { //print the game board in a 4x4 matrix
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            cout<<gameSpace[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
int Gameboard::findFour(char chr) { //four symbols in any row, col, diagonals 'wins'
    int int_dg0=0, int_dg1=0;
    for(int i=0;i<4;i++) {
        int int_row=0, int_col=0;
        for(int j=0;j<4;j++) {
            if(gameSpace[i][j][0]==chr) { ++int_row;}
            if(gameSpace[j][i][0]==chr) { ++int_col;}
            if( (gameSpace[i][j][0]==chr)&&(i==j) ) { ++int_dg0;}
            if( (gameSpace[i][j][0]==chr)&&(i==(3-j)) ) { ++int_dg1;}
        }
        if((int_row==4)||(int_col==4)||(int_dg0==4)||(int_dg1==4)) { return 1; }
    }
    return 0;
}

void Gameboard::updateBoard(std::string str0, char symbol) {
    //Convert player's input in coordinates
    int row=0, column=0, k=0;
    std::stringstream(str0) >> k;
    row=k/10-1;
    column=k%10-1;
    //Update gameboard setGameSpace(int row, int column, char value)
    gameSpace[row][column] = symbol;
}

/* ------------------------------------------------------------------ */
