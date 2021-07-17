#include <iostream>

using namespace std;
// if put only one element in an array, it will initialized
// empty elements from the most left of enum 
enum chessBoard {Pawn, Empty, Rook, Knight, Bishop, Queen, King};

int main(void)
{
    chessBoard board[8][8] = {
        {Rook, Knight, Bishop, King, Queen, Bishop, Knight, Rook},
        {Pawn},
        {Empty},
        {Empty},
        {Empty},
        {Empty},
        {Pawn},
        {Rook, Knight, Bishop, Queen, King, Bishop, Knight, Rook}
        };

    cout << board[0][5] << endl;


    return 0;
}