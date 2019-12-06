#include <iostream>

using namespace std;

void print(int *pointer) {
    cout << "The value of this variable is: " << *pointer << endl;
}

int main()
{
    int a = 10, b = 20;
    print(&a);
    print(&b);
}
