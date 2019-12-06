#include <iostream>
#include <string>

using namespace std;

struct city {
    string name;
    int size;
};

string sizeToString(int size) {
    switch (size) {
        case 1:
            return "is a tiny city";
        case 2:
            return "is a small city";
        case 3:
            return "is an ok size city";
        case 4:
            return "is a big city";
        case 5:
            return "is a huge city";
        default:
            return "is a city";
    }
}

void printCity(city c) {
    cout << "Your city " << c.name << " " << sizeToString(c.size) << endl;
}

void printCities(city c[], int size) {
    for (int i = 0; i < size; i++) {
        printCity(c[i]);
    }
}

int main()
{
    string name;
    int size;
    int length;

    cout << "How many cities do ou want to create? ";
    cin >> length;
    cin.ignore();

    city cities[length];

    for (int i = 0; i < length; i++) {
        cout << "What's your city's name? ";
        getline(cin, name);

        cout << "What is your city's size? ";
        cin >> size;
        cin.ignore();

        city c;

        c.name = name;
        c.size = size;

        cities[i] = c;
    }

    // size has to be calculated upfront since passing arrays to a function loses knowledge about the size,
    // only the pointer to the first element is passed
    //int length = sizeof(cities)/sizeof(cities[0]);
    printCities(cities, length);

}
