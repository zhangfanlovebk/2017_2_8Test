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



//String类
//#include<iostream>
//#include<malloc.h>
//
//using namespace std;
////using std::swap;
//class Date
//{
//
//public:
//	~Date()
//	{
//		cout << "~Date()" << "  " << this << endl;
//	}
//private:
//	int data;
//};
//
//
//class String
//{
//
//public:
//	//构造函数
//	String(const char*pstr = "")
//	{
//		if (pstr == NULL)
//		{
//			_pstr = new char[1];
//			*_pstr = '\0';
//		}
//		else
//		{
//			_pstr = new char[strlen(pstr) + 1];
//			strcpy_s(_pstr, strlen(pstr) + 1, pstr);
//			cout << "String( const char*pstr = "")" << "  " << this << endl;
//		}
//
//	}
//
//
//	////拷贝构造函数
//	String(const String &s)
//	{
//		_pstr = new char[strlen(s._pstr) + 1];
//		strcpy_s(_pstr, strlen(s._pstr) + 1, s._pstr);
//		cout << "String(const Stirn &s)" << "  " << this << endl;
//
//	}
//
//
//	//拷贝构造函数
//	//要完成的任务：1.开辟出新的空间2.完成拷贝
//	//String(const String&s)
//	//{
//	//	String str(s._pstr);//临时对象完成任务
//	//	std::swap(_pstr, str._pstr);//
//	//	
//	//}
//
//
//
//	//赋值函数
//	//String& operator=(const String&s)
//	//{
//	//	if (this != &s)//if(_pstr!=s._pstr)
//	//	{
//	//		/*	char *temp = s._pstr;
//	//		delete[] _pstr;
//	//		_pstr = new char[strlen(s._pstr) + 1];
//	//		strcpy(_pstr, temp);
//	//		*/
//	//		char*pTemp = new char[strlen(s._pstr) + 1];
//	//		strcpy_s(pTemp, strlen(s._pstr) + 1, s._pstr);
//	//		delete[] _pstr;
//	//		_pstr = pTemp;
//
//	//	}
//	//	return *this;
//
//	//}
//
//	//赋值函数
//
//	//完成三件事：1.释放原有空间2.开辟新空间3.拷贝->验证
//	//升级版
//	//String& operator=( const String&s)
//	//{
//	//	if (this != &s)
//	//	{
//	//		String str(s._pstr);//构造出了一个str->开辟新空间了
//	//		std::swap(_pstr, str._pstr);//->str->新开辟空间的内容，str->_pStr->要释放的空间
//	//	}
//	//	return *this;//返回的时候重新拷贝构造出了一份
//	//}//销毁临时对象，原有的空间被释放。
//	
//
//
//	//最新版，是否有问题？
//	String& operator =(String s)//-》拷贝构造函数
//	{
//		std::swap(_pstr, s._pstr);//s3=s2;
//		return *this;//->拷贝构造函数，但没有调用
//	}
//
//
//
//	//析构函数
//	//~String()
//	//{
//	//	if (NULL != _pstr)
//	//	{
//	//		delete[]_pstr;
//	//		*_pstr = NULL;
//	//	}
//	//}
//	~String()
//	{
//		if (_pstr)
//		{
// 			delete[]_pstr;
//			_pstr = NULL;
//
//			cout << "~String()" << "  " << this << endl;
//		}
//	}
//
//
//
//private:
//
//	char* _pstr;
//};
//
//void FunTest1()
//{
//	String s1("hello");
//	String s2("111");
// 	s2 = s1;
//
//}
//
//void FunTest()
//{
//	int a[5];
//	String s1("hello,wold");//构造函数
//	String s2("111");//构造函数
//	String s3[5];
//    *s3=s2;
//
//	s1 = s2;
//	s2 = s1;
//	s2 = s1;
//	s1 = s2;
//
//}
//
//
////验证程序是否出错
//
//int main()
//{
//	//Date*p=new Date[3];
//	//delete p;//->析构函数->operator delete->free
//
//	////delete (Date*)(((int*)p)-1);
//	FunTest1();
//	return 0;
//}




//写出String类浅拷贝的形式，并分析存在的问题
//#include<iostream>
//#include<malloc.h>
//
//using namespace std;
////实现String 类
////浅拷贝存在的问题：
//
////1.浅拷贝只进行值的拷贝，对于指针类型的数据成员来说，会指向同一块分配的堆区，释放的时候会把一块空间释放多次
////2.浅拷贝的赋值函数来说，值拷贝的形式会泄露掉当前对象之前所指的空间。
////3浅拷贝的拷贝构造函数不开辟新的空间，对于一个指针来说，会写入失败，造成严重的后果。
//
////浅拷贝
//class String
//{
//	String(const char*pStr = "")
//	{
//		if (pStr != NULL)
//		{
//			_pStr = new char[strlen(pStr) + 1];
//			strcpy_s(_pStr, strlen(pStr) + 1,pStr);
//		}
//		else
//		{
//			_pStr = new char[ 1];
//			*_pStr = '\0';
//		}
//	}
//
//	//拷贝构造函数
//	String(const String&s)
//		:_pStr(s._pStr)
//	{
//	
//	}
//
//	//赋值函数
//	String& operator=(const String&s)
//	{
//		if (this != &s)
//		{
//			_pStr = s._pStr;
//		}
//		return *this;
//	}
//
//
//	~String()
//	{
//		if (_pStr != NULL)
//		{
//			delete[]_pStr;
//			_pStr = NULL;
//		}
//	}
//
//private:
//	char* _pStr;
//};
//
//
////写出简洁版本深拷贝的String类
//class String
//{
//	String(const char*pStr = "")
//	{
//		if (pStr != NULL)
//		{
//			_pStr = new char[strlen(pStr) + 1];
//			strcpy_s(_pStr, strlen(pStr) + 1, pStr);
//		}
//		else
//		{
//			_pStr = new char[1];
//			*_pStr = '\0';
//		}
//	}
//
//	//拷贝构造函数
//	String(const String&s)
//	{
//	
//		String temp(s._pStr);
//		//走完初始化列表只是空间给出来了，_pStr为随机值-》一旦交换进行释放，可能会崩溃
//		_pStr = NULL;
//		std::swap(_pStr,temp._pStr);	
//	}
//
//	//赋值函数
//	//方法
//	String& operator=(const String&s)
//	{
//		if (this != &s)
//		{
//			String temp(s);
//			delete[]_pStr;
//			_pStr = NULL;
//			std::swap(_pStr, temp._pStr);
//		}
//		return *this;
//	}
//
//	//方法二
//	//String& operator=( String s)
//	//{
//	//	std::swap(_pStr, s._pStr);
//	//	return *this;
//	//
//	//}
//
//	~String()
//	{
//		if (_pStr != NULL)
//		{
//			delete[]_pStr;
//			_pStr = NULL;
//		}
//	}
//
//private:
//	char* _pStr;
//};
//
//
////写出使用指针作为引用计数处理的String类，并分析存在问题
////使用指针解决的浅拷贝
//class String
//{
//public:
//	String(const char*pStr = "")
//	:_pCount(new int(1))
//	{
//		if (pStr != NULL)
//		{
//			_pStr = new char[strlen(pStr) + 1];
//			strcpy_s(_pStr, strlen(pStr) + 1, pStr);
//		}
//		else
//		{
//			_pStr = new char[1];
//			*_pStr = '\0';
//		}
//
//	}
//	//拷贝构造函数
//	String(const String&s)
//		:_pStr(s._pStr)
//		,_pCount(s._pCount)
//	{
//
//		++(*_pCount);
//		//_pStr = s._pStr;
//	}
//
//	//赋值函数->释放原有空间->拷贝考虑自赋值
//	String& operator =(const String& s)
//	{
//		if (_pStr != s._pStr)
//		{
//			//要检查是否是自赋值，因为调用赋值函数，就说明是两个对象，（可能成员函数指向了同一块空间），若不判断则有两种肯能，1.pCout++2.销毁对象都不对
//			if ((0 == --(*_pCount)) && (_pStr != NULL))
//			{
//				delete[] _pStr;
//				_pStr = NULL;
//				delete _pCount;
//				_pCount = NULL;
//
//			}
//			else
//			{
//				--(*_pCount);
//			}
//				++(*s._pCount);
//				_pStr = s._pStr;
//				_pCount = s._pCount;
//		}
//		return *this;
//	}
//
//
//	//析构函数
//	~String()
//	{
//		if ((0 == --*_pCount) && (_pStr != NULL))
//		{
//			delete[]_pStr;
//			_pStr = NULL;
//
//			delete _pCount;
//			_pCount = NULL;
//		}
//	
//	}
//
//private:
//
//	char* _pStr;
//	int * _pCount;
//
//};
////->容易出错->写时拷贝
//
//
////写时拷贝的String类
//class String
//{
//public:
//	//构造函数
//	String(const char*pStr="")
//	{
//		if (pStr == NULL)
//		{
//			_pStr = new char[1+4];
//			*(int*)_pStr = 1;
//			_pStr += 1;
//			*(char*)_pStr = '\0';//此处要不要强转？
//		}
//		else
//		{
//			_pStr = new char[strlen(pStr) + 1 + 4];
//			*(int*)_pStr = 1;
//			_pStr += 1;
//			strcpy_s((char*)_pStr, strlen(pStr) + 1 , pStr);
//
//		}
//	
//	}
//
//	//计数引用的获取
//	int& GetRef()
//	{
//		return *(((int*)_pStr) - 1);
//	}
//
//	//释放该对象所有空间
//	void Realease()
//	{
//		if ((0 == --GetRef())&&(_pStr!=NULL))
//		{
//			_pStr -= 4;
//			delete[]_pStr;
//			_pStr = NULL;
//		}
//	}
//
//
////拷贝构造函数->
//	String(String&s)
//	{
//		++s.GetRef();
//		_pStr = s._pStr;
//	
//	}
//
//	//最标准赋值函数->释放原有空间-》开辟新空间-》拷贝
//	String& operator=( String&s)
//	{
//		//if ((0 == --GetRef()) && (_pStr != NULL))
//		//{
//		//	delete[]_pStr;//开辟了多少空间，位置要进行更正
//		//}
//		
//		//判断是否是自赋值
//		if (_pStr != s._pStr)
//		{
//			Realease();//释放空间
//			_pStr = s._pStr;
//			++s.GetRef();
//
//		}
//		return *this;
//	}
//
//	//完成s[3]='\0';->重载operator[]
//	char& operator[](size_t size)
//	{
//		if (GetRef()> 1)
//		{
//			--GetRef();
//			char* pTemp = new char[strlen(_pStr) + 1 + 4];
//			*(int*)pTemp = 1;
//			pTemp += 1;
//			strcpy_s((char*)pTemp, strlen(_pStr) + 1, _pStr);
//			//strcpy_s((char*)_pStr,strle)
//			_pStr = pTemp;
//
//		}
//		return *(_pStr + size);
//	}
//	
//	const char& operator[](size_t size)const
//	{
//		return *(_pStr + size);
//	}
//	//一个对象改变其余都进行了改变，怎么解决。
//
//private:
//	char *_pStr;
//};
//
//void FunTest0()
//{
//	String s1("hello,world");
//	String s2("1111");
//	//s2 = s1;
//	//s2[3] = '9';
//	char c = s2[5];
//
//	String s4(s2);
//	String s5;
//	int a = 0;
//}
//
//void FunTest1()//测试一个对象对其余对象的影响
//{
//	String s1("hello");
//	String s2(s1);
//	String s3(s2);
//	s3[2] = 'e';
//	int a = 10;
//}
//
//int main()
//{
//	//FunTest0();
//
//	FunTest1();
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;

class TPoint
{
public:
	void SetPoint(int x,int y);
	int Xcoord()
	{
		return X;
	}
	int Ycoord()
	{
		return Y;
	}
	void Move(int xOffset,int yOffset);
private:
	int X,Y;
};

void TPoint::SetPoint(int x,int y)
{
	X = x;
	Y = y;
}

void TPoint::Move(int xOffset,int yOffset)
{
	X += xOffset;
	Y += yOffset;
}

int main()
{
	TPoint p1,p2;
	p1.SetPoint(3,5);
	p2.SetPoint(8,10);
	p1.Move(2,1);
	p2.Move(1,-2);
	cout<<"x1 = "<<p1.Xcoord()<<",y1 = "<<p1.Ycoord()<<endl;
	cout<<"x2 = "<<p2.Xcoord()<<",y2 = "<<p2.Ycoord()<<endl;
	return 0;
}