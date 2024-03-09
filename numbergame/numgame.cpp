#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
    cout << "\t\t--------------------Welcome to Number Guessing Game----------------------" << endl;
    cout << "\t\t-------rules for the game---------"<< endl;
    cout << "\t\t-->>1.you will have to guess a number between 0 to 100"<< endl;
    cout << "\t\t--->>>that's it let's start playing and Best Of Luck<<<---"<< endl;

    srand(time(0));

    char playagain = 'y';

    while(playagain=='y'||playagain=='Y'){
    int randnum = (rand() % 100) + 1;
    cout << "**you have 10 chances to guess the correct number**""\n"<< endl;
    int chance = 10;
    int playerin;

        for (int i = 1; i <= 10;i++){
            cout << "--->>>enter a number : ";
            cin >> playerin;

            if (playerin > 100 || playerin < 0) {
                cout << "\nInvalid input! Please enter a number between 0 and 100." << endl;
                continue; 
            }

            if(playerin==randnum){
                cout << "\nCONGRATES!!!  you guessed it right!!";
                cout << "Thanks for playing......--->>><<<---......Thanks for playing";
                break;
            }else{
                if(playerin>randnum){
                    cout << "\n**insert a smaller number & try again**";
                }else {
                    cout << "\n**insert a larger number & try again**";
                }
                chance--;
                cout << "\n""(chance left to guess the number is : "<< chance << ")"<<endl;
            }

            if(chance==0){
                cout << "\n sorry your chance to guess the number has finished" << endl;
                cout << "the random number was : " << randnum << endl;
                cout << "Thanks for playing......--->>><<<---......Thanks for playing";
            }
        }
        cout << "\n Do you want to play again ? (y/n) : ";
        cin >> playagain;
    }
    cout << "\n";
    return 0;
}