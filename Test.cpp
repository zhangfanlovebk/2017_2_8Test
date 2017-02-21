//#include <iostream>
//using namespace std;

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

//class Date
//{
//public:
//	Date(int year,int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(int month, int day)
//	{
//		_year = 2017;
//		_month = month;
//		_day = day;
//	}
//
//	Date()
//	{
//		_year = 2000;
//		_month = 12;
//		_day = 20;
//	}
//
//	Date(int day);
//
//	void Display()
//	{
//		cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//Date::Date(int day)
//	{
//		_year = 2017;
//		_month = 2;
//		_day = day;
//	}
//
//void TestDate()
//{
//	Date d1(2017,2,8);
//	d1.Display();
//
//	Date d2(2,9);
//	d2.Display();
//
//	Date d3;
//	d3.Display();
//
//	Date d4(11);
//	d4.Display();
//}
//
//int main()
//{
//	TestDate();
//	//ListNode node;
//	//node.f();
//	return 0;
//}


//String类
#include<iostream>
#include<malloc.h>

using namespace std;
//using std::swap;
class Date
{

public:
	~Date()
	{
		cout << "~Date()" << "  " << this << endl;
	}
private:
	int data;
};


class String
{

public:
	//构造函数
	String(const char*pstr = "")
	{
		if (pstr == NULL)
		{
			_pstr = new char[1];
			*_pstr = '\0';
		}
		else
		{
			_pstr = new char[strlen(pstr) + 1];
			strcpy_s(_pstr, strlen(pstr) + 1, pstr);
			cout << "String( const char*pstr = "")" << "  " << this << endl;
		}

	}


	////拷贝构造函数
	String(const String &s)
	{
		_pstr = new char[strlen(s._pstr) + 1];
		strcpy_s(_pstr, strlen(s._pstr) + 1, s._pstr);
		cout << "String(const Stirn &s)" << "  " << this << endl;

	}


	//拷贝构造函数
	//要完成的任务：1.开辟出新的空间2.完成拷贝
	//String(const String&s)
	//{
	//	String str(s._pstr);//临时对象完成任务
	//	std::swap(_pstr, str._pstr);//
	//	
	//}



	//赋值函数
	//String& operator=(const String&s)
	//{
	//	if (this != &s)//if(_pstr!=s._pstr)
	//	{
	//		/*	char *temp = s._pstr;
	//		delete[] _pstr;
	//		_pstr = new char[strlen(s._pstr) + 1];
	//		strcpy(_pstr, temp);
	//		*/
	//		char*pTemp = new char[strlen(s._pstr) + 1];
	//		strcpy_s(pTemp, strlen(s._pstr) + 1, s._pstr);
	//		delete[] _pstr;
	//		_pstr = pTemp;

	//	}
	//	return *this;

	//}

	//赋值函数

	//完成三件事：1.释放原有空间2.开辟新空间3.拷贝->验证
	//升级版
	//String& operator=( const String&s)
	//{
	//	if (this != &s)
	//	{
	//		String str(s._pstr);//构造出了一个str->开辟新空间了
	//		std::swap(_pstr, str._pstr);//->str->新开辟空间的内容，str->_pStr->要释放的空间
	//	}
	//	return *this;//返回的时候重新拷贝构造出了一份
	//}//销毁临时对象，原有的空间被释放。
	


	//最新版，是否有问题？
	String& operator =(String s)//-》拷贝构造函数
	{
		std::swap(_pstr, s._pstr);//s3=s2;
		return *this;//->拷贝构造函数，但没有调用
	}



	//析构函数
	//~String()
	//{
	//	if (NULL != _pstr)
	//	{
	//		delete[]_pstr;
	//		*_pstr = NULL;
	//	}
	//}
	~String()
	{
		if (_pstr)
		{
 			delete[]_pstr;
			_pstr = NULL;

			cout << "~String()" << "  " << this << endl;
		}
	}



private:

	char* _pstr;
};

void FunTest1()
{
	String s1("hello");
	String s2("111");
 	s2 = s1;

}

void FunTest()
{
	int a[5];
	String s1("hello,wold");//构造函数
	String s2("111");//构造函数
	String s3[5];
    *s3=s2;

	s1 = s2;
	s2 = s1;
	s2 = s1;
	s1 = s2;

}


//验证程序是否出错

int main()
{
	//Date*p=new Date[3];
	//delete p;//->析构函数->operator delete->free

	////delete (Date*)(((int*)p)-1);
	FunTest1();
	return 0;
}



//日期类
//#include <iostream>
//using namespace std;
//
//class Date
//{
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//public:
//	//考虑非法日期
//	Date(int year = 2000 , int month = 10, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//		if (_month > 12 || _month <= 0){
//			cout << "date error!" << endl;
//		}
//		else if ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0){
//			if ((1 == _month) || (3 == _month) || (5 == _month) || (7 == _month) \
//				|| (8 == _month) || (10 == _month) || (12 == _month)){
//				if (_day > 31 || _day <= 0){
//					cout << "date error!" << endl;
//				}
//			}
//			if (2 == month){
//				if (_day > 29 || _day <= 0){
//					cout << "date error!" << endl;
//				}
//			}
//			else{
//				if (_day > 30 || _day <= 0){
//					cout << "date error!" << endl;
//				}
//			}
//		}
//		else{
//			if ((1 == _month) || (3 == _month) || (5 == _month) || (7 == _month) \
//				|| (8 == _month) || (10 == _month) || (12 == _month)){
//				if (_day > 31 || _day <= 0){
//					cout << "date error!" << endl;
//				}
//			}
//			if (2 == month){
//				if (_day > 28 || _day <= 0){
//					cout << "date error!" << endl;
//				}
//			}
//			else{
//				if (_day > 30 || _day <= 0){
//					cout << "date error!" << endl;
//				}
//			}
//		}
//	}
//
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	Date& operator=(const Date& d)
//	{
//		this->_year = d._year;
//		this->_month = d._month;
//		this->_day = d._day;
//		return *this;
//	}
//
//	Date operator+(int days)
//	{
//		this->_day = this->_day + days;
//		return *this;
//	}
//
//	Date operator-(int days)
//	{
//		this->_day = this->_day - days;
//		return *this;
//	}
//
//	int operator-(const Date& d)
//	{
//		this->_year = this->_year - d._year;
//		this->_month = this->_month - d._month;
//		this->_day = this->_day - d._day;
//		return this->_day;
//	}
//
//	Date& operator++()
//	{
//		this->_year += 1;
//		this->_month += 1;
//		this->_day += 1;
//		return *this;
//	}
//
//	Date operator++(int)
//	{
//		Date temp = *this;
//		this->_year += 1;
//		this->_month += 1;
//		this->_day += 1;
//		return temp;
//	}
//
//	Date& operator--()
//	{
//		this->_year -= 1;
//		this->_month -= 1;
//		this->_day -= 1;
//		return *this;
//	}
//
//	Date operator--(int)
//	{
//		Date temp = *this;
//		this->_year -= 1;
//		this->_month -= 1;
//		this->_day -= 1;
//		return temp;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day << endl;
//	return _cout;
//}
//
//void FunTest()
//{
//	Date li(2016, 2, 29);
//	Date gq;
//	cout << li << endl;
//	cout << gq << endl;
//
//	++li;
//	cout << li << endl;
//
//	li = li - 3;
//	cout << li << endl;
//}
//
//int main()
//{
//	FunTest();
//	return 0;
//}