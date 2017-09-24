#include "Board.h"
void changePiece(char *piece);
int main()
{
	Board *game = new Board(3,3);
	bool gameRunning = true;
	char playerPiece = 'X';
	while (gameRunning == true)
	{
		game->displayBoard();
		int space;
		std::cout << "Input a space.\n";
		std::cin >> space;
		game->chooseSpace(space, playerPiece);
		game->winCondition(playerPiece, gameRunning);
		changePiece(&playerPiece);
	}
	std::cout << "Game Over\n";
	system("pause");
}
void changePiece(char *piece)
{
	*piece = (*piece == 'X') ? 'O' : 'X';
}
