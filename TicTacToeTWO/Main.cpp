#include "Board.h"
void changePiece(char piece)
{
	if (piece == 88)
		piece = 79;
	if (piece == 79)
		piece = 88;
}
int main()
{
	Board *game = new Board(9);
	bool gameRunning = true;
	char playerPiece = 88;
	while (gameRunning == true)
	{
		game->displayBoard();
		int space;
		/*std::cin >> space;
		game->chooseSpace(space, piece);*/
		changePiece(playerPiece);
		game->ClearBoard();
	}
	system("pause");
}
