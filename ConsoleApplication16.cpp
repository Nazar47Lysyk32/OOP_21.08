#include <iostream>
#include "Class.h"

using namespace std;

int main()
{
    Class str1("hello");
    Class str2("bye");
    Class str3 = str1 * str2;

    cout << str3.setRyadok();
}