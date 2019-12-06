#include <iostream>

using namespace std;

int main()
{
    char string[256];                               // A nice long string

    cout<<"Please enter a long string: ";
    cin.getline ( string, 256, '\n' );              // Input goes into string
    cout<<"Your long string was: "<< string <<endl;

    char anotherString[256];

    strncpy(anotherString, string, sizeof(anotherString));

    char doubleString[512];
    doubleString[0] = '\0';
    strcat ( doubleString, anotherString );
    strcat ( doubleString, string );

    cout<<"I can duplicate strings: " << doubleString << "\n";
    cout<<"Total length: " << strlen(doubleString) << "\n";
    cin.get();
}
