#pragma once
class MyString
{
	char* str;
	int length;
	static int count;
public:
	MyString();
	MyString(int size);
	MyString(const char* s);
	MyString(const MyString& obj);
	MyString(MyString&& obj);
	~MyString();
	void Print();
	void Input(const char* s);
	void MyStrcpy(MyString& obj);
	bool MyStrStr(const char* st);
	int  MyChr(char c);
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);
	static void PrintCount();
	MyString operator+ (MyString& c);
	MyString operator+ (const char* c);
	MyString operator+ (char c);
	MyString operator- (const char* c);
	bool operator==(MyString& b);
	bool operator!=(MyString& b);
	bool operator>(MyString& b);
	bool operator>=(MyString& b);
	bool operator<(MyString& b);
	bool operator<=(MyString& b);
	bool operator>(const char* b);
	bool operator>=(const char* b);
	bool operator<(const char* b);
	bool operator<=(const char* b);
	bool operator==(const char* b);
	bool operator!=(const char* b);
};