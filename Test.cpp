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
	//���캯��
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


	////�������캯��
	String(const String &s)
	{
		_pstr = new char[strlen(s._pstr) + 1];
		strcpy_s(_pstr, strlen(s._pstr) + 1, s._pstr);
		cout << "String(const Stirn &s)" << "  " << this << endl;

	}


	//�������캯��
	//Ҫ��ɵ�����1.���ٳ��µĿռ�2.��ɿ���
	//String(const String&s)
	//{
	//	String str(s._pstr);//��ʱ�����������
	//	std::swap(_pstr, str._pstr);//
	//	
	//}



	//��ֵ����
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

	//��ֵ����

	//��������£�1.�ͷ�ԭ�пռ�2.�����¿ռ�3.����->��֤
	//������
	//String& operator=( const String&s)
	//{
	//	if (this != &s)
	//	{
	//		String str(s._pstr);//�������һ��str->�����¿ռ���
	//		std::swap(_pstr, str._pstr);//->str->�¿��ٿռ�����ݣ�str->_pStr->Ҫ�ͷŵĿռ�
	//	}
	//	return *this;//���ص�ʱ�����¿����������һ��
	//}//������ʱ����ԭ�еĿռ䱻�ͷš�
	


	//���°棬�Ƿ������⣿
	String& operator =(String s)//-���������캯��
	{
		std::swap(_pstr, s._pstr);//s3=s2;
		return *this;//->�������캯������û�е���
	}



	//��������
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
	String s1("hello,wold");//���캯��
	String s2("111");//���캯��
	String s3[5];
    *s3=s2;

	s1 = s2;
	s2 = s1;
	s2 = s1;
	s1 = s2;

}


//��֤�����Ƿ����

int main()
{
	//Date*p=new Date[3];
	//delete p;//->��������->operator delete->free

	////delete (Date*)(((int*)p)-1);



	FunTest1();
	return 0;
}