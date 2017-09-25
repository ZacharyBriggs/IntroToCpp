#include "Board.h"
void changePiece(char *piece);
void playAgain();
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
		game->winCondition(playerPiece);
		changePiece(&playerPiece);
	}
<<<<<<< HEAD
	playAgain();
=======
	system("pause");
>>>>>>> parent of d592124... winning will end the game
}
void changePiece(char *piece)
{
	*piece = (*piece == 'X') ? 'O' : 'X';
}
void playAgain()
{
	char yesNo;
	std::cout << "Play again? Y/N\n";
	std::cin >> yesNo;
	if (yesNo == 'y' || yesNo == 'Y')
		main();

}
