#include <time.h>
#include <iostream>

using namespace std;

int main() {

    int max, min, guess, num, diff, o, att;
    string to = "Your guess was to ";
    att = NULL;
    o = 1;

    cout << "This is a number guessing game." << endl;
    cout << "what will your \"Maximum Value\" be?" << endl;
    //Finds max
    cout << "Max Value: ";
    cin >> max;
    cout << endl;
    //Finds min
    cout << "and your \"Minimum Value\"?" << endl;
    cout << "Minimum Value: ";
    cin >> min;
    cout << endl;
    //Gets random number
    diff = max - min + 1;
    cout << "There will be " << diff << " possible values for you to chose from, ranging from " << min << "-" << max << "." << endl << endl;
    srand((unsigned int)time(NULL));
    num = rand() % diff + min;
    cout << "Whats your guess: ";
    cin >> guess;
    //loop for guessing
    while (guess != num) {
        att++;

        cout << endl << "Sorry, thats wrong." << endl;
        cout << "That was attempt #" << att << "." << endl;
        //Tells you if your high or low
        if (guess < num) {
            cout << to << "low." << endl;
        }
        else {
            cout << to << "high." << endl << endl;
        }
        cout << "Guess another number: ";
        cin >> guess;
    }
    //When you get it right
    cout << endl << "Correct, the number was " << num << ", good job" << endl;
    //Ending the Program, with some fun :)
    cout << "Type 1 and press ENTER to end the program: ";
    num = 2;
    cin >> num;

    while (num != 1) {
        cout << endl << "You entered " << num << ", which is not 1" << endl;
        cout << "Type 1 then press ENTER: ";
        cin >> num;
        o++;

        while (o >= 3) {
            cout << endl << "This is attempt #" << o + 1 << ", of entering the number \"1\"" << endl;
            cout << "Waiting: ";
            cin >> num;
            o++;
            if (num == 1) {
                o = 0;
            }
            else {}
        }
    }
    //Ends program
    return 0;
}