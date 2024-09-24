#include <iostream>
#include <string>

using namespace std;

int main(){
    int lombardo = 16427; 
    string yesorno; 
    int guess1;

    cout << "Welcome to Joshua's Number Guesser! Are you ready to guess my number? " << endl; 
    cin >> yesorno;

    if(yesorno == "yes"){
    cout << "Good. Let's begin >:) " << endl; 
    }
    else if(yesorno == "no"){
    cout << "Too bad. Let's begin >:)" << endl;
    }
    else{
        cout << "Invalid Input bruh" << endl;
    }

    cout << "Start guessing the number. You get 5 guesses. " << endl;
    cin >> guess1; 

    if(guess1 == 16427){
        cout << "You got it right! ";
    }
    else{
        cout << "Guess again. Hint: It is an odd number. " << endl; 
        int guess2;
        cin >> guess2;

        if(guess2 == 16427){
            cout << "Correct!";
        }
        else{
        cout << "Nope. Hint: it is greater than 100. " << endl;
        int guess3;
        cin >> guess3; 

        if(guess3 == 16427){
            cout << "Yes! You got it right!" << endl;
        }
        else{
            cout << "Sorry, wrong guess. The number is 5 digits long" << endl;
            int guess4;
            cin >> guess4; 

            if(guess4 == 16427){
                cout << "Finally, right answer!" << endl;
            }
            else{
                cout << "Ugh, c'mon. Final hint: It is greater than 16400 and is less than 16430" << endl;
                int guess5;
                cin >> guess5;

                if(guess5 == 16427){
                    cout << "Yes!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl; 
                }
                else{
                    cout << "Aw mane. It was 16427." << endl;
                } 
            
            }
        }

        }
    }
}   