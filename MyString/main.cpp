#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
	MyString obj("Hello world");
	obj.Print();

	//cout << obj.MyStrStr("Hello") << endl;

	MyString obj2;
	obj2.Input("Hello worlld");
	obj2.Print();

	//cout << obj2.MyStrLen() << endl;

	//obj.MyStrCat(obj2);
	//obj.Print();

	//obj.MyStrcpy(obj2);
	//obj.Print();

	//cout << obj.MyChr('i') << endl;

	/*obj.MyDelChr('m');
	obj.Print();*/

	//MyString obj3;
	//obj3.Input("I am sigma");
	//cout << obj3.MyStrCmp(obj2) << endl;

	//MyString obj4 = move(obj3);
	//obj4.Print();

	MyString obj5("Hello world");

	//MyString::PrintCount();

	MyString rez = obj + obj2;
	rez.Print();
	MyString rez2 = obj5 + "!!!";
	rez2.Print();
	MyString rez3 = obj5 + '?';
	rez3.Print();
	MyString rez4 = obj5 - "world";
	rez4.Print();
	
	if (obj > obj2)
	{
		cout << "1 is bigger" << endl;
	}
	else
	{
		cout << "2 is bigger" << endl;
	}
	if (obj == obj2)
	{
		cout << "1 == 2" << endl;
	}
	if (obj != obj2)
	{
		cout << "1 != 2" << endl;
	}
	if (obj >= obj2)
	{
		cout << "1 >= 2" << endl;
	}
	if (obj < obj2)
	{
		cout << "1 < 2" << endl;
	}
	if (obj <= obj2)
	{
		cout << "1 <= 2" << endl;
	}
	cout << endl;
	if (obj > "Hello")
	{
		cout << "1 is bigger" << endl;
	}
	else
	{
		cout << "2 is bigger" << endl;
	}
	if (obj >= "Hello")
	{
		cout << "1 >= string" << endl;
	}
	if (obj < "Hello")
	{
		cout << "1 < string" << endl;
	}
	if (obj <= "Hello")
	{
		cout << "1 <= string" << endl;
	}
	if (obj == "Hello")
	{
		cout << "1 == string" << endl;
	}
	if (obj != "Hello")
	{
		cout << "1 != string" << endl;
	}
}