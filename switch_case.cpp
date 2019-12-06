#include <iostream>

using namespace std;

void a() {
    cout << "You did a" << endl;
}

void b() {
    cout << "You did b" << endl;
}

void what() {
    cout << "Your choice was unexpected" << endl;
}

int main()
{
    char choice;
    bool quit = false;

    cout << "Welcome to play the game!" << endl;
    do {
        cout << "Choose your step (a, b, q): ";
        cin >> choice;

        switch (choice) {
            case 'a':
                a();
                break;
            case 'b':
                b();
                break;
            case 'q':
                quit = true;
                break;
            default:
                what();
        }
    } while (!quit);

    cout << "Good bye!" << endl;
}
