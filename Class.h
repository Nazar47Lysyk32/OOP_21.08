#pragma once

#include <iostream>
using namespace std;

class Class
{
private:
    string str;
public:
    Class();
    Class(string);
    void setRyadok(string);
    string setRyadok();

    Class operator*(Class);

};
