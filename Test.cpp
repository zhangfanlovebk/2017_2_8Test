#include <iostream>
using namespace std;

//int main()
//{
//	int a = 3;
//	int& b = a;
//	int& c = a;
//	int& d = b;
//	d = 9;
//
//	cout<<a<<endl;//9
//	//cout<<"hello world"<<endl;
//	return 0;
//}

//struct ListNode{
//	ListNode* _next;
//	int _data;
//
//	void f()
//	{
//		cout<<"f()"<<endl;
//	}
//};

class Date
{
public:
	Date(int year,int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date(int month, int day)
	{
		_year = 2017;
		_month = month;
		_day = day;
	}

	Date()
	{
		_year = 2000;
		_month = 12;
		_day = 20;
	}

	Date(int day);

	void Display()
	{
		cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

Date::Date(int day)
	{
		_year = 2017;
		_month = 2;
		_day = day;
	}

void TestDate()
{
	Date d1(2017,2,8);
	d1.Display();

	Date d2(2,9);
	d2.Display();

	Date d3;
	d3.Display();

	Date d4(11);
	d4.Display();
}

int main()
{
	TestDate();
	//ListNode node;
	//node.f();
	return 0;
}