#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
//struct Student
//{
//	void SetStudentInfo(const char* name, const char* gender, int age)
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//	void PrintStudentInfo()
//	{
//		cout << _name << "," << _gender << "," << _age << endl;
//	}
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//class Student
//{
//public:
//	void SetStudent(char name, char gender, int age);
//	void PrintStudent();
//private:
//	char _name;
//	char _gender;
//	int _age;
//};
//void Student::SetStudent(char name, char gender, int age)
//{
//	_name = name;
//	_gender = gender;
//	_age = age;
//}
//void Student::PrintStudent()
//{
//	cout << _name << " " << _gender << " " << _age << endl;
//}
//int main()
//{
//	Student s;
//	s.SetStudent("Ð¡Ã÷","ÄÐ",19);
//	system("pause");
//	return 0;
//}
class Date
{
public:
	void Show()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	void Set(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1,d2;
	d1.Set(2020, 06, 27);
	d1.Show();
	d2.Set(2020, 06, 28);
	d2.Show();
	system("pause");
	return 0;
}