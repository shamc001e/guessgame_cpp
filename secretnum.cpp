#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{
    cout << "\t\t\t\tWelcome To GuessMyNumber Game!" << endl;
    cout << "you need to guess a number between 1 and 100";

    while(true){
        double guessnum, choiced;
        cout << "\n\nenter the difficulty level: " << endl;
        cout << "1 for easy";
        cout << "\t\t2 for medium";
        cout << "\t\t3 for hard";
        cout << "\t\t0 to end the game" << endl;
        cout << "enter your choice: ";
        cin >> choiced;
        //generate hidden number
        srand(time(0));
        int secretnum = rand() % 100;

        // difficulty level easy
        if(choiced == 1){
            cout << "\n\nyou have ten chances to guess the number" << endl;
            int choiceleft = 10;
            for(int i = 1; i <= 10; i++){
                cout << "\n\nguess the number: ";
                cin >> guessnum;
                //verifying
                if(guessnum == secretnum){
                    cout << "congratulations! you won!";
                    cout << "\tplay the game again!\n\n";
                    break;
                } else{
                    if(guessnum > secretnum){
                        cout << "Too High!" << endl;
                    } else if(guessnum < secretnum) {
                        cout << "Too Low!" << endl;
                    }
                    choiceleft--;
                    cout << choiceleft << " choices left. " << endl;
                    if(choiceleft == 0){
                        cout << "you couldn't find the secret number. It was " << secretnum << ", You Lose!!" << endl;
                        cout << "\t\t\tplay the game again to win!!\n\n";
                    }
                }

            }

        }
        //difficulty medium
        else if(choiced == 2){
            cout << "\n\nYou have 7 chances to guess the number" << endl;
            int choiceleft = 7;
            for(int i = 1; i <= 7; i++){
                cout << "\n\nguess the number: ";
                cin >> guessnum;
                if(guessnum == secretnum){
                    cout << "congratulations! you won!";
                    cout << "\tplay the game again!\n\n";
                    break;
                } else{
                    if(guessnum > secretnum){
                        cout << "Too High!" << endl;
                    } else if(guessnum < secretnum) {
                        cout << "Too Low!" << endl;
                    }
                    choiceleft--;
                    cout << choiceleft << " choices left. " << endl;
                    if(choiceleft == 0){
                        cout << "you couldn't find the secret number. It was " << secretnum << ", You Lose!!" << endl;
                        cout << "\t\t\tplay the game again to win!!\n\n";
                    }
                }
            }
        }
        //difficulty hard
        else if(choiced == 3){
            cout << "\n\nyou have 5 chances to guess the number" << endl;
            int choiceleft = 5;
            for(int i = 1; i <= 5; i++){
                cout << "\n\nguess the number: ";
                cin >> guessnum;
                if(guessnum == secretnum){
                    cout << "congratulations! you won!";
                    cout << "\tplay the game again!\n\n";
                    break;
                } else{
                    if(guessnum > secretnum){
                        cout << "Too High!" << endl;
                    } else if(guessnum < secretnum) {
                        cout << "Too Low!" << endl;
                    }
                    choiceleft--;
                    cout << choiceleft << " choices left. " << endl;
                    if(choiceleft == 0){
                        cout << "you couldn't find the secret number. It was " << secretnum << ", You Lose!!" << endl;
                        cout << "\t\t\tplay the game again to win!!\n\n";
                    }
                }
            }
        }
        // end the game
        else if(choiced == 0){
            exit(0);
        }
        //nonsense values
        else{
            cout << "wrong choice, enter valid choice to play the game." << endl;
        }
    }


    return 0;
}
