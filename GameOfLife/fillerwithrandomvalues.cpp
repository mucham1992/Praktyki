#include "fillerwithrandomvalues.h"

FillerWithRandomValues::FillerWithRandomValues()
{

}
void FillerWithRandomValues::fillBoard( Board & board){
    srand ( time(NULL) );
    std::vector<std::vector<bool>> theBoard= board.getTheBoard();
    theBoard.resize(numberOfColumn, std::vector<bool>(numberOfRow));
    for (int row=1; row<numberOfRow-1; row++){
        for (int column=1; column<numberOfColumn-1; column++)
        {
            theBoard[row][column] = rand() % 2;
        }
    }
    board.setStateOfBoard(theBoard);
}
