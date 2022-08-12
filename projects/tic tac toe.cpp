#include <iostream>
using namespace std;

class TicTacToe 
{ 
char board[3][3] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
char cPlayerCharacter = '0';
int iChoice = iChoice + 1;
public:
  
    void DisplayBoard()

      {
        system("cls");
        cout << ' ' << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
        cout << "---|---|---" << endl;
        cout << ' ' << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
        cout << "---|---|---" << endl;;
        cout << ' ' << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    
      }
    int game() {

        int player=1;
        char op=0;
        do {
            cout << "enter player 1 choice(x/o): ";
            cin >> op;
            if (op != 'x' && op != 'o') {
                cout << "invalid! "<<endl;
            }
            else
                break;
        } while (op != 'x' && op != 'o');
       
        

        int pos;
        
       
        for (int i = 0; i < 9; i++)
        {

            cout << "player " << player << " enter the position: ";
            cin >> pos;
           
            switch (pos)
            {
            case 1:
                board[0][0] = op;
                break;
            case 2:
                board[0][1] = op;
                break;
            case 3:
                board[0][2] = op;
                break;
            case 4:
                board[1][0] = op;
                break;
            case 5:
                board[1][1] = op;
                break;
            case 6:
                board[1][2] = op;
                break;
            case 7:
                board[2][0] = op;
                break;
            case 8:
                board[2][1] = op;
                break;
            case 9:
                board[2][2] = op;
                break;
            }
           
            do {
                if (board[3][3] = op) {
                    cout << "invalid!" << endl;
                }
                else
                    break;
            } while (board[3][3] = op);

           
            DisplayBoard();
           
           
            if (board[0][0] == op && board[0][1] == op && board[0][2] == op ||
                board[1][0] == op && board[1][1] == op && board[1][2] == op ||
                board[2][0] == op && board[2][1] == op && board[2][2] == op ||
                board[0][0] == op && board[1][0] == op && board[2][0] == op ||
                board[0][1] == op && board[1][1] == op && board[2][1] == op ||
                board[0][2] == op && board[1][2] == op && board[2][2] == op ||
                board[0][0] == op && board[1][1] == op && board[2][2] == op ||
                board[2][0] == op && board[1][1] == op && board[0][2] == op)
            {
                cout << "player " << player << " won!!";
                return 0;
            }
            if (player == 1)
                player = 2;
            else if (player == 2)
                player = 1;
            if (op == 'x')
                op = 'o';
            else if (op == 'o')
                op = 'x';
        } 
        cout << "draw!!";
       
        return 0;
    }
 };
    



int main()
{
    TicTacToe obj;
    obj.DisplayBoard();
    obj.game();
    return 0;

}