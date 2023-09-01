#include "Class.h"

Class::Class()
{
	str = "";
}

Class::Class(string str)
{
	this->str = str;
}

void Class::setRyadok(string str)
{
	this->str = str;
}

string Class::setRyadok()
{
	return str;
}


Class Class::operator*(Class b)
{
	Class temp;

	for (int i = 0; i < this->str.length(); i++)
	{
		for (int j = 0; j < b.str.length(); j++)
		{
			if (this->str[i] == b.str[j])
			{
				temp.str += this->str[i];
			}
		}
	}

	return temp;
}