#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

int randomNumber(int min, int max) {
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(min, max);
    return uniform_dist(e1);
}

int main()
{
    int hiddenNumber = randomNumber(1, 100);
    int yourGuess;

    do {
        cout << "Guess my number: ";
        cin >> yourGuess;
        cin.ignore();

        if (yourGuess < hiddenNumber)
            cout << "That is too low" << "\n";
        else if (yourGuess > hiddenNumber)
            cout << "That is too high" << "\n";
    } while (yourGuess != hiddenNumber);

    cout << "You guessed right: " << yourGuess << " == " << hiddenNumber << "\n";
    cin.get();
}
