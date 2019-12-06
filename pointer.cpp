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

    int *p;
    p = (int*) malloc(5*sizeof(int));

    if(!p)
    {
        cout << "Memory Allocation Failed" << endl;
        exit(1);
    }

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for (int i=0; i<5; i++)
    {
        /* ptr[i] and *(ptr+i) can be used interchangeably */
        cout << "Value (a): " << *(p+i) << endl;
        cout << "Value (b): " << p[i] << endl;
    }

    free(p);
    p = new int;

    cout << "Org values: (" << a << ", " << b << ")" << endl;
}
