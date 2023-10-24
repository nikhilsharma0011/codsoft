#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void level(int rand_no, int max_attempts);

int main() {
    int rand_no, choice;
    char replay;
    cout << "\n\t*********** NUMBER GUESSING GAME ***********\t\n";
    cout<<"\nINSTRUCTIONS :-\n";
    cout<<"- YOU HAVE TO GUESS THE CORRECT NUMBER\n";
    cout<<"- YOU WILL GET LIMITED NUMBER OF GUESSES ACCORDING TO THE LEVEL\n";
    cout<<"- YOU WILL ALSO GET HINTS\n"; 
    do {
        cout << "\nCHOOSE LEVEL OF GAME ";
        cout << "\n1. EASY\n2. MEDIUM\n3. HARD\n";
        cout << "ENTER YOUR CHOICE (1/2/3) : ";
        cin >> choice;

        switch (choice) {
            case 1:
            cout<<"\nYou will get 10 guesses in this level!";
                level(rand_no, 10);  
                break;
            case 2:
            cout<<"\nYou will get 7 guesses in this level!";
                level(rand_no, 7);  
                break;
            case 3:
            cout<<"\nYou will get 5 guesses in this level!";
                level(rand_no, 5);   
                break;
            default:
                cout << "INVALID CHOICE";
        }
        cout<<"\nDo you want to play again ? (y/n) : ";
        cin>>replay;
        if(replay != 'y' && replay != 'Y'){
            cout<<"Thanks for playing";
            break;
        }
    } while (choice != 0);

    return 0;
}

void level(int rand_no, int max_attempts) {
    srand(time(0));
    rand_no = rand() % 100;
    int guess_no;
    for (int attempts = 0; attempts < max_attempts; attempts++) {
        cout << "\nEnter your number : ";
        cin >> guess_no;
        if (guess_no > rand_no) {
            cout << "Guess smaller";
        } else if (guess_no < rand_no) {
            cout << "Guess larger";
        } else {
            cout << "You guessed the right number!";
            return;  
        }
    }
    cout << "\n\nGAME OVER! You have run out of attempts. The correct number was: " << rand_no << endl;
}

