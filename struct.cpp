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

void printCity(city *c) {


    cout << "Your city " << c->name << " " << sizeToString(c->size) << endl;
}

int main()
{
    string name;
    int size;

    cout << "What's your city's name? ";
    getline (cin, name);
    cout << "What is your city's size? ";
    cin >> size;

    city c;
    city *p = &c;

    p->name = name;
    p->size = size;

    printCity(p);
}
