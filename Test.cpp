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


//������
//#include <iostream>
//using namespace std;
//
//class Date
//{
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//public:
//	//���ǷǷ�����
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



//String��
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
//	//���캯��
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
//	////�������캯��
//	String(const String &s)
//	{
//		_pstr = new char[strlen(s._pstr) + 1];
//		strcpy_s(_pstr, strlen(s._pstr) + 1, s._pstr);
//		cout << "String(const Stirn &s)" << "  " << this << endl;
//
//	}
//
//
//	//�������캯��
//	//Ҫ��ɵ�����1.���ٳ��µĿռ�2.��ɿ���
//	//String(const String&s)
//	//{
//	//	String str(s._pstr);//��ʱ�����������
//	//	std::swap(_pstr, str._pstr);//
//	//	
//	//}
//
//
//
//	//��ֵ����
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
//	//��ֵ����
//
//	//��������£�1.�ͷ�ԭ�пռ�2.�����¿ռ�3.����->��֤
//	//������
//	//String& operator=( const String&s)
//	//{
//	//	if (this != &s)
//	//	{
//	//		String str(s._pstr);//�������һ��str->�����¿ռ���
//	//		std::swap(_pstr, str._pstr);//->str->�¿��ٿռ�����ݣ�str->_pStr->Ҫ�ͷŵĿռ�
//	//	}
//	//	return *this;//���ص�ʱ�����¿����������һ��
//	//}//������ʱ����ԭ�еĿռ䱻�ͷš�
//	
//
//
//	//���°棬�Ƿ������⣿
//	String& operator =(String s)//-���������캯��
//	{
//		std::swap(_pstr, s._pstr);//s3=s2;
//		return *this;//->�������캯������û�е���
//	}
//
//
//
//	//��������
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
//	String s1("hello,wold");//���캯��
//	String s2("111");//���캯��
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
////��֤�����Ƿ����
//
//int main()
//{
//	//Date*p=new Date[3];
//	//delete p;//->��������->operator delete->free
//
//	////delete (Date*)(((int*)p)-1);
//	FunTest1();
//	return 0;
//}




//д��String��ǳ��������ʽ�����������ڵ�����
//#include<iostream>
//#include<malloc.h>
//
//using namespace std;
////ʵ��String ��
////ǳ�������ڵ����⣺
//
////1.ǳ����ֻ����ֵ�Ŀ���������ָ�����͵����ݳ�Ա��˵����ָ��ͬһ�����Ķ������ͷŵ�ʱ����һ��ռ��ͷŶ��
////2.ǳ�����ĸ�ֵ������˵��ֵ��������ʽ��й¶����ǰ����֮ǰ��ָ�Ŀռ䡣
////3ǳ�����Ŀ������캯���������µĿռ䣬����һ��ָ����˵����д��ʧ�ܣ�������صĺ����
//
////ǳ����
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
//	//�������캯��
//	String(const String&s)
//		:_pStr(s._pStr)
//	{
//	
//	}
//
//	//��ֵ����
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
////д�����汾�����String��
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
//	//�������캯��
//	String(const String&s)
//	{
//	
//		String temp(s._pStr);
//		//�����ʼ���б�ֻ�ǿռ�������ˣ�_pStrΪ���ֵ-��һ�����������ͷţ����ܻ����
//		_pStr = NULL;
//		std::swap(_pStr,temp._pStr);	
//	}
//
//	//��ֵ����
//	//����
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
//	//������
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
////д��ʹ��ָ����Ϊ���ü��������String�࣬��������������
////ʹ��ָ������ǳ����
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
//	//�������캯��
//	String(const String&s)
//		:_pStr(s._pStr)
//		,_pCount(s._pCount)
//	{
//
//		++(*_pCount);
//		//_pStr = s._pStr;
//	}
//
//	//��ֵ����->�ͷ�ԭ�пռ�->���������Ը�ֵ
//	String& operator =(const String& s)
//	{
//		if (_pStr != s._pStr)
//		{
//			//Ҫ����Ƿ����Ը�ֵ����Ϊ���ø�ֵ��������˵�����������󣬣����ܳ�Ա����ָ����ͬһ��ռ䣩�������ж��������ֿ��ܣ�1.pCout++2.���ٶ��󶼲���
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
//	//��������
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
////->���׳���->дʱ����
//
//
////дʱ������String��
//class String
//{
//public:
//	//���캯��
//	String(const char*pStr="")
//	{
//		if (pStr == NULL)
//		{
//			_pStr = new char[1+4];
//			*(int*)_pStr = 1;
//			_pStr += 1;
//			*(char*)_pStr = '\0';//�˴�Ҫ��Ҫǿת��
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
//	//�������õĻ�ȡ
//	int& GetRef()
//	{
//		return *(((int*)_pStr) - 1);
//	}
//
//	//�ͷŸö������пռ�
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
////�������캯��->
//	String(String&s)
//	{
//		++s.GetRef();
//		_pStr = s._pStr;
//	
//	}
//
//	//���׼��ֵ����->�ͷ�ԭ�пռ�-�������¿ռ�-������
//	String& operator=( String&s)
//	{
//		//if ((0 == --GetRef()) && (_pStr != NULL))
//		//{
//		//	delete[]_pStr;//�����˶��ٿռ䣬λ��Ҫ���и���
//		//}
//		
//		//�ж��Ƿ����Ը�ֵ
//		if (_pStr != s._pStr)
//		{
//			Realease();//�ͷſռ�
//			_pStr = s._pStr;
//			++s.GetRef();
//
//		}
//		return *this;
//	}
//
//	//���s[3]='\0';->����operator[]
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
//	//һ������ı����඼�����˸ı䣬��ô�����
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
//void FunTest1()//����һ���������������Ӱ��
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

//#include <iostream>
//using namespace std;

//class TPoint
//{
//public:
//	void SetPoint(int x,int y);
//	int Xcoord()
//	{
//		return X;
//	}
//	int Ycoord()
//	{
//		return Y;
//	}
//	void Move(int xOffset,int yOffset);
//private:
//	int X,Y;
//};
//
//void TPoint::SetPoint(int x,int y)
//{
//	X = x;
//	Y = y;
//}
//
//void TPoint::Move(int xOffset,int yOffset)
//{
//	X += xOffset;
//	Y += yOffset;
//}
//
//int main()
//{
//	TPoint p1,p2;
//	p1.SetPoint(3,5);
//	p2.SetPoint(8,10);
//	p1.Move(2,1);
//	p2.Move(1,-2);
//	cout<<"x1 = "<<p1.Xcoord()<<",y1 = "<<p1.Ycoord()<<endl;//(5,6)
//	cout<<"x2 = "<<p2.Xcoord()<<",y2 = "<<p2.Ycoord()<<endl;//(9,8)
//	return 0;
//}

//class TDate1
//{
//public:
//	TDate1(int y,int m,int d);
//	~TDate1();
//	void Print();
//private:
//	int year,month,day;
//};
//
//TDate1::TDate1(int y,int m,int d)
//{
//	year = y;
//	month = m;
//	day = d;
//	cout<<"Constructor called."<<endl;
//}
//
//TDate1::~TDate1()
//{
//	cout<<"Destructor called."<<endl;
//}
//
//void TDate1::Print()
//{
//	cout<<year<<"."<<month<<"."<<day<<endl;
//}
//
//int main()
//{
//	TDate1 today(2017,3,4),tomorrow(2017,3,5);
//	cout<<"today is "<<;
//	today.Print();
//	cout<<"tomorrow is ";
//	tomorrow.Print();
//	return 0;
//}


//��������
//#include <iostream>
//using namespace std;
//
//class M
//{
//public:
//	M(int x,int y)
//	{
//		X = x;
//		Y = y;
//	}
//
//	M(int x)
//	{
//		X = x;
//		Y = x * x;
//	}
//
//	int add(int x,int y);
//	int add(int x);
//	int add();
//
//	int Xout()
//	{
//		return X;
//	}
//
//	int Yout()
//	{
//		return Y;
//	}
//
//private:
//	int X,Y;
//};
//
//int M::add(int x, int y)
//{
//	X = x;
//	Y = y;
//	return X + Y;
//}
//
//int M::add(int x)
//{
//	X = Y = x;
//	return X + Y;
//}
//
//int M::add()
//{
//	return X + Y;
//}
//
//int main()
//{
//	M a(10,20),b(4);
//	cout<<"a = "<<a.Xout()<<","<<a.Yout()<<endl;//10,20
//	cout<<"b = "<<b.Xout()<<","<<b.Yout()<<endl;//4,16
//	int i = a.add();//30
//	int j = a.add(3,9);//12
//	int k = b.add(5);//10
//	cout<<i<<endl<<j<<endl<<k<<endl;
//	return 0;
//}

//��̬���ݳ�Ա
//#include <iostream>
//using namespace std;
//
//class My
//{
//public:
//	My(int a,int b,int c);
//	void GetNumber();
//	void GetSum();
//private:
//	int A,B,C;
//	static int Sum;
//};
//
//int My::Sum = 0;
////��̬���ݳ�Ա�Ƕ���������
////ÿ�β���ѭ��ʼ�����£������ϴν����������
////��̬��Ա�����ʼ���������������
//
//My::My(int a, int b, int c)
//{
//	A = a;
//	B = b;
//	C = c;
//	Sum += A + B + C;
//}
//
//void My::GetNumber()
//{
//	cout<<"Number = "<<A<<","<<B<<","<<C<<endl;
//}
//
//void My::GetSum()
//{
//	cout<<"Sum = "<<Sum<<endl;
//}
//
//void main()
//{
//	My M(3,7,10),N(14,9,11);
//	M.GetNumber();//3,7,10
//	N.GetNumber();//14,9,11
//	M.GetSum();//54
//	N.GetSum();//54
//}

//��̬��Ա����
//class M
//{
//public:
//	M(int a)
//	{
//		A = a;
//		B += a;
//	}
//	static void f1(M m);//��̬��Ա������������
//private:
//	int A;
//	static int B;//�����ж����ǹ��еģ���֤���ж����ȡ���º���ͬ��ֵ
//};
//
//void M::f1(M m)
//{
//	cout<<"A = "<<m.A<<endl;//�������÷Ǿ�̬��Ա   m.A
//	cout<<"B = "<<B<<endl;//��̬��Աֱ������       B
//}
//
//int M::B = 0;//�����޶�
//
//void main()
//{
//	M P(5),Q(10);//ͬʱ����
//	M::f1(P);//5,15
//	M::f1(Q);//10,15
//}//��̬��Ա�����൱�ڹ��õģ���������µ����һ�μ����ֵ


//ָ�����Ա��ָ��
#include <iostream>
using namespace std;

class A
{
public:
	A(int i)
	{
		a = i;
	}
	int fun(int b)
	{
		return a * c + b;
	}
	int c;//���г�Ա
private:
	int a;
};

void main()
{
	A x(8);//��a��ʼ��Ϊ8
	int A::*pc;//����ָ�������ݳ�Աָ��pc
	pc = &A::c;//pcָ��c

	x.*pc = 3;//��ָ�����á����á�����c��ֵ3
	int(A::*pfun)(int);//����ָ�����Ա����ָ��pfun
	pfun = &A::fun;//pfunָ��fun����

	A *p = &x;//ָ������ָ��
	//��������ָ��p��������  x.*pfun
	cout<<(p->*pfun)(5)<<endl;//fun����ʵ��Ϊ5���롰p->fun(5)���ȼ�
	//cout<<p->fun(5)<<endl;
}
//�ܽ᣺
//1.��Ҫ����ָ�������ݳ�Ա���Ա������ָ��
//int A::*pc		int(A::*pfun)(int)
//2.Ȼ��ָ��ָ��Ҫָ�������
//pc = &A::c		pfun = &A::fun
//ǰ�������Լ�дΪ
//int A::*pc = &A::c
//int(A::*pfun)(int) = &A::fun
//3.��ָ�븳ֵҪע�⸳ֵ��ʽ