#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
    //Game Rock Paper Scissor
    srand (time(NULL));
    char input = ' ';
    int player_pts = 0, computer_pts = 0;
    char computer_output, player_output;
    int random_var;

    while (input != 'Q' && input != 'q')
    {
        cout << "Masukkan pilihan R / P / S / Q to quit : ";
        cin >> input; //r
        if (input != 'r' && input != 'R' && input != 'P' && input != 'p' && input != 'S' && input != 's' && input != 'q' && input != 'Q')
        {
            cout << "Input is invalid! Please enter another character!";
        }
        else if (input != 'Q' && input != 'q')
        {
            cout << "Nilai Player   : " << player_pts << endl;
            cout << "Nilai Computer : " << computer_pts << endl;

            if (input == 'P' || input == 'p')
            {
                player_output = 1;
            }
            else if (input == 'R' || input == 'r')
            {
                player_output = 2;
            }
            else if (input == 'S' || input == 's')
            {
                player_output = 3;
            }

            int num = rand() % 3 + 1;
            if(num == 1)
            {
                random_var = 1;
                computer_output = 'P';
            }
            else if (num == 2)
            {
                random_var = 2;
                computer_output = 'R';
            }
            else if (num == 3)
            {
                random_var = 3;
                computer_output = 'S';
            }

            cout << endl << "player: " << input << endl;
            cout << " VS ";
            cout << endl << "computer: " << computer_output << endl;
            if (player_output  == 1 && random_var == 2 || player_output == 2 && random_var == 3 || player_output == 3 && random_var == 1)
            {
                cout << "You Win!" << endl << endl;
                player_pts += 1;
            }
            else if (player_output == random_var)
            {
                cout << "oops, tie!" << endl << endl;
            }
            else 
            {
                cout << "You Lose!" << endl << endl;
                computer_pts += 1;
            }

        }
    }
    if (player_pts > computer_pts)
    {
        cout << "Nilai Player   : " << player_pts << endl;
        cout << "Nilai Computer : " << computer_pts << endl;
        cout << "Congrats! You won!" << endl;
    }
    else if (player_pts < computer_pts)
    {
        cout << "Nilai Player   : " << player_pts << endl;
        cout << "Nilai Computer : " << computer_pts << endl;
        cout << "Better luck next time :)" << endl;
    }
    else
    {
        cout << "Nilai Player   : " << player_pts << endl;
        cout << "Nilai Computer : " << computer_pts << endl;
        cout << "Wow, it's a tie!" << endl;
    }
    return 0;
}
