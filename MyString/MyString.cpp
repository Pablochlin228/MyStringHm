#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString()
{
	length = 80;
	str = new char[length];
	count++;
}

MyString::MyString(int size)
{
	length = size;
	str = new char[length];
	count++;
}

MyString::MyString(const char* s)
{
	length = strlen(s);
	str = new char[length + 1];
	strcpy_s(str, length + 1, s);
	count++;
}

MyString::MyString(const MyString& obj)
{
	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
	count++;
}

MyString::MyString(MyString&& obj)
{
	str = obj.str;
	obj.str = nullptr;
	length = obj.length;
	obj.length = 0;
}

MyString::~MyString()
{
	delete[] str;
}

void MyString::Print()
{
	cout << str << endl;
}

void MyString::Input(const char* s)
{
	if (str != nullptr)
	{
		delete[] str;
	}

	length = strlen(s);
	str = new char[length + 1];
	strcpy_s(str, length + 1, s);
}

void MyString::MyStrcpy(MyString& obj)
{
	if (str != nullptr)
	{
		delete[] str;
	}

	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
}

bool MyString::MyStrStr(const char* st)
{
	char* temp = strstr(str, st);
	if (temp != nullptr)
	{
		return true;
	}
	return false;
}

int MyString::MyChr(char c)
{
	for (size_t i = 0; i < length; i++)
	{
		if (str[i] == c)
		{
			return i;
		}
	}
	return -1;
}

int MyString::MyStrLen()
{
	return length + 1;
}

void MyString::MyStrCat(MyString& b)
{
	int newLength = this->length + b.length;
	char* newStr = new char[newLength + 1];
	strcpy_s(newStr, newLength + 1, this->str);
	strcat_s(newStr, newLength + 1, b.str);

	delete[] this->str;
	this->str = newStr;
	this->length = newLength;
}

void MyString::MyDelChr(char c)
{
	int newLength = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (str[i] != c)
		{
			newLength++;
		}
	}
	char* newStr = new char[newLength + 1];
	int j = 0;
	for (size_t i = 0; i < length + 1; i++)
	{
		if (str[i] != c)
		{
			newStr[j++] = str[i];
		}
	}

	delete[] str;
	str = newStr;
	length = newLength;
}

int MyString::MyStrCmp(MyString& b)
{
	int result = strcmp(this->str, b.str);
	return result;
}

int MyString::count = 0;
void MyString::PrintCount()
{
	cout << "Count: " << count << endl;
}

MyString MyString::operator+(MyString& c)
{
	int newLength = length + c.length;
	char* newStr = new char[newLength + 1];
	strcpy_s(newStr, newLength + 1, str);
	strcat_s(newStr, newLength + 1, c.str);

	MyString rez(newStr);
	rez.length = newLength;
	return rez;
}

MyString MyString::operator+(const char* c)
{
	int newLength = length + strlen(c);
	char* newStr = new char[newLength + 1];
	strcpy_s(newStr, newLength + 1, str);
	strcat_s(newStr, newLength + 1, c);

	MyString rez(newStr);
	rez.length = newLength;
	return rez;
}

MyString MyString::operator+(char ch)
{
	int newLength = length + 1;
	char* newStr = new char[newLength + 1];
	strcpy_s(newStr, newLength + 1, str);
	char temp[2] = { ch,'\0' };
	strcat_s(newStr, newLength + 1, temp);

	MyString rez(newStr);
	rez.length = newLength;
	return rez;
}

MyString MyString::operator-(const char* c)
{
	int newLength = length - strlen(c);
	char* newStr = new char[newLength + 1];
	strncpy_s(newStr, newLength + 1, str, length - strlen(c));

	MyString rez(newStr);
	rez.length = newLength;
	return rez;
}




