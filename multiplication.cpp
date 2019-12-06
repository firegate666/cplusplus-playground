#include <iostream>

using namespace std;

int mult(int x, int y) {
    return x*y;
}

int main()
{
    int x, y;
    cout << "Give two number for multiplication: x=";
    cin >> x;
    cout << "y=";
    cin >> y;

    cout << x << " * " << y << " = " << mult(x, y) << endl;
    cin.get();
}
