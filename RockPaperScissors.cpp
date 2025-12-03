#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

struct GameStruct
{
    int MoveID;
    string MoveName;
};

int main()
{
    int choice;
	cout << "=== Rock, Paper, Scissors Game ===" << endl;
	cout << "-----------------------------------" << endl;
    srand(time(0));
    
    GameStruct Moves[3] = { {0, "Rock"}, {1, "Paper"}, {2, "Scissors"} };

    do {
        int PlayerMoveID;  
        
        while (true) {
            cout << "Enter your move (0 = Rock, 1 = Paper, 2 = Scissors): ";
            cin >> PlayerMoveID;

			if (PlayerMoveID != 0 && PlayerMoveID != 1 && PlayerMoveID != 2)
            {
                cout << ">> Invalid move. Please enter 0, 1, or 2.\n" << endl;
            }
            else
            {
                break;
            }
        }

        cout << "You chose: " << Moves[PlayerMoveID].MoveName << endl;
        
        int ComputerMoveID = rand() % 3;
        cout << "Computer chose: " << Moves[ComputerMoveID].MoveName << endl;

        if (PlayerMoveID == ComputerMoveID)
        {
            cout << ">> It's a tie! <<" << endl;
        }
        else if ((PlayerMoveID == 0 && ComputerMoveID == 2) ||
                 (PlayerMoveID == 1 && ComputerMoveID == 0) ||
                 (PlayerMoveID == 2 && ComputerMoveID == 1))
        {
            cout << ">> You win! <<" << endl;
        }
        else
        {
            cout << ">> Computer wins! <<" << endl;
        }
        
        while (true){
            cout << "\nPlay again? (0 = No, 1 = Yes): ";
            cin >> choice;

            if (choice < 0 || choice > 1)
            {
                cout << ">> Invalid choice. Please enter 0 or 1." << endl;
            }
            else
            {
                break;
            }
		}

        if (choice == 0)
        {
            cout << "-----------------------------------" << endl;
            cout << "Thanks for playing!" << endl;
            break;
        }

    } while (true);



    return 0;
}