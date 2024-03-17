#include <iostream>
#include <string>

using namespace std;

void error() {
    cout << "Error 404" << endl;
    exit(404);
};

void game() {
    string arr[6] = {
        "Tunnel",
        "Explosion",
        "Drill",
        "Wrecking ball",
        "Teleporter",
        "Disguise"
    };
    string input2;
    // cout << "Choose one of the following: " << options1;

    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << ", ";  // Print a comma and space after each string except the last one
        };
    };
    cout << ":\n";
    cin >> input2;

    if (input2 == "Tunnel") {
        cout << "Digging to a Train Track!!??\n" << endl;
        cout << "Died by a train." << endl;
        exit(1);
    } else if (input2 == "Explosion") {
        cout << "Nothing happened?\nYou go check" << endl;
        cout << "Touch... oops Died because of lanemine you placed" << endl;
        exit(2);
    } else if (input2 == "Drill") {
        cout << "You use a laxer drill on the wall\n" << endl;
        cout << "Drilling the wall..." << endl;
        cout << "Yay you survived!" << endl;
        cout << "Oh no! The wall crashed on your head" << endl;
        exit(3);
    } else if (input2 == "Wrecking") {
        cout << "Driving... \n Smash the wall!" << endl;
        cout << "Oops! You missed the wall\n and the ball smashed you" << endl;
        exit(4);
    } else if (input2 == "Teleporter") {
        cout << "Teleporting..." << endl;
        cout << "Oops! The teleporter has a error and teleport you in the wall" << endl;
        exit(5); 
    } else if (input2 == "Disguise") {
        cout << "You tied youself in to a money sack..." << endl;
        cout << "Someone is driving..." << endl;
        cout << "They stop the truck they're driving" << endl;
        cout << "\nYou hear them talking: \nPerson 1: Hey, how did we lose one?\n Person 2: I think we should throw it in the back, just to be safe." << endl;
        cout << "Driving to the bank..." << endl;
        cout << "You think you win, you get out of the sack but the safe you're in has security cameras and you get caught...\n\n" << endl;
        cout << "To be continued..." << endl;
    } else {
        cout << input2 << " is not an option" << endl;
        error();
    };
};

int main() {
    char input1;

    cout << "2008 (C) StickPage.com" << endl;
    cout << "I have no right of this game. I am just a placeholder for the game because of Adobe Flash." << endl;
    cout << "I hope you enjoy it!" << endl;
    cout << "" << endl;
    cout << "Breaking the Bank\n\n" << endl;
    cout << "Play... (y for yes, n for no)" << endl;
    cin >> input1;

    if (input1 == 'y') {
        game();
    } else {
        exit(0);
    }
    return 0;
};