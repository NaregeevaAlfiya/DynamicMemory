#include <iostream>
using namespace std;

#define tab "\t"
//define - ����������
//��������� #define ���������� �����������
//��� ��������, ��� ��������
//#define ������� ���������������� (������)
//������ ���������� �� ����� ����������

//�������������(identifier) - ��� ���!!! (��� ���������)

void Exchange(int& a, int& b); //�������� ������� (���������� �������- Function declaration)
			//(����������� ���������)
			//int* a, int* b (�� ���������)
//� ��������� � ���������� �������, �� ���������� ����� ���������
//������� ���������.
void main()
{
	setlocale(LC_ALL, "ru");
	int a = 2;
	int b = 3;
	cout << a << tab << b << endl;
	Exchange(a, b); //����� ������� - Function call
			//(������������ ���������)
			//&a, &b (�� ���������)
	//����� �� �������� �������, �� �������� � ��� ���������.
	cout << a << tab << b << endl;
}

void Exchange(int& a, int& b) //���������� (�����������) ������� - Function definition
{			//����������� ���������)
			//int* a, int* b (�� ���������)
			//�������� ������� �������� ������� a � b
	
	/* �� ���������
	int buffer = *a;
	*a = *b;
	*b = buffer;
	cout << a << tab << b << endl;
	*/

	int buffer = a;
	a = b;
	b = buffer;
	cout << a << tab << b << endl;
	
}
//�������� ���������� - ���������� ��� ������� ��������
//��������� � �������
/*
---------------------------------------------------
- �� �������� - by  value;
- �� ��������� - by pointer;
- �� ������ - by reference;
������ �� �������� ��������� � ������� �� ��������.
��� ����, �������� ������������ ���������� ���������� � �������.
� ���� ������� �������� ��� ��������, �� ���������
���������� � ������� ����������, � �� � ������ �����������.

---------------------------------------------------
��� ���� ����� ������� ����� �������� �������� ����������
�� ����� �������� �� ��������� ��� �� ������.

***�������� ���������� �� ���������.***
��� ���� ����� �������� ���������� � ������� �� ���������
����������� ��������� ������� ������ ���� �����������.
��� ��������� � ���� ������� ����� ��������������,
����� �������� ������ � ��������� ���������� ����������.
����� ���� ��� ������ ������� ����� ����� ������
������������ ����������.

***�������� ���������� �� ������***

������ (Reference) - ��� ����������, �������
�������� ����� ������ ����������.
������ ���������� �� ��������� ���, ��� �
�� ����� ��������������.
*/