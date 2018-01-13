/////////////////////////////////////////����3 ������4//////////////////////////////////////
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	cout.precision(5);
	int N;
	int exit;
	do
	{
		cout << "������� ����� ������� ";
		cin >> N;
		switch (N)
		{
		case 5:
		{
			/*5.	������� ����� ��������� ����� �� 12 �� 80 �� 1- ����� � ������.*/
			int i;
			for (i = 12;i <= 80;i++)
				cout << i << " ^ 2 = " << pow(i, 2) << endl;
		}
		break;
		case 6:
		{
			/*6.	������� �������� ��������� ����� �� 22 �� 88 �� 1- ����� � ������.
			������� ��� ���������� �������� ��������� ���� ����� ����� ���:a^2-b^2=(a+b)*(a-b)*/
			int i;
			int b;
			for (i = 22;i < 88;i++)
			{
				b = i + 1;
				cout << i << " ^ 2 - " << b << " ^ 2 = " << ((i + b)*(i - b)) << endl;
			}
		}
		break;
		case 7:
		{
			/*7.	���� ������������ ����� A � ����������� ����� �� 1 �� N (> 0).
			����� �������� ��������� A � ����������� ����� N .*/
			int i;
			int A;
			int n;
			cout << "������� ����� A ";
			cin >> A;
			cout << "������� ����� N ";
			cin >> n;
			for (i = 1;i <= n;i++)
			{
				cout << A << " ^ 2 - " << i << " ^ 2 = " << ((A + i)*(A - i)) << endl;;
			}
		}
		break;
		case 9:
		{
			/*9.	�������� ���������� �����, ��������� ������ �� 20-�� ������-�������� ���������� �� �������.
			�������� ����� ��� � ������� �������� (�� ���� ���� ������ �� ������� ���������� ���������� �����).
			����������, ����� ����� ������ �������, ��������� N ����� (�����������, ��� �������� N �������  � �������).
			�������� �������� �� ������������.*/
			int n;
			int i;
			int a;
			int ch = 0;
			int bb = 1;
			cout << "������� ����������� ����� ������� �� 2 �� 40 (��� ��������� ���� ������ 2) ";
			cin >> n;
			if (n % 2 == 0)
			{
				for (i = 40;i >= 2;i -= 2)
				{
					ch++;
					cout << ch << "����� - " << i << " �����" << endl;
				}
				do
				{
					n += 2;
					bb++;

				} while (n < 40);
				cout << "������� ������ " << bb << " �����" << endl;
			}
			else
				cout << "error" << endl;


		}
		break;
		case 4:
		{
			int a, b, n, x, v, z1;
			int ch = 0;
			double M = 0, z2;
			cout << "������� �����" << endl;
			cin >> n;
			x = n;
			v = n;
			do
			{
				v /= 10;
				ch++;
			} while (v > 0);
			for (int i = ch; i >= 0; i--)
			{
				z1 = int(pow(10, i));
				z2 = pow(10, ((ch - 1) - i));
				a = x%z1;
				b = (x - a) / z1;
				x = x - b*z1;
				M += b*z2;
			}
			if (n == M)
				cout << "���� ����� ���������" << endl;
			else cout << "������ ����� �� ���������" << endl;
		}
		break;
		case 3:
		{
		case 2:
		case 8:
			//3.	������ ����������� ����� �� 10 �� N.��� ������������ ����� ����� ������ ����� � ����� ��� ����.
			//2.	������ ����������� ����� �� 10 �� N. ����� ���������� ����� ������ ����������� �����.
			//8.	������ ����������� ����� �� 10 �� N. ����� ���������� ����� ������ ����������� �����.
			int b;
			int sum = 0;
			int max = 0;
			int min = 9;
			int num, i, c;
			cout << "������� �����" << endl;
			cin >> num;
			for (i = 10;i <= num;i++)
			{
				c = i;
				b = 0;
				sum = 0;
				min = 9;
				max = 0;
				while (c > 0)
				{
					b = c % 10;
					if (max < b)
						max = b;
					if (min > b)
						min = b;
					sum += b;
					c /= 10;
				}
				cout << "������ ������ ����� " << i << " �������� " << b << " ����������� ������ �������� " << min << " ������������ ������ �������� " << max << "; ����� ��� ����� ������� ����� = " << sum << endl;
			}
		}
		break;
		case 10:
		{
			/*10.	���� ����������� �����  n (n<9999).
			����� ������������� ����� ����� (� �������������, ��� n>10).*/
			int n;
			int i;
			int predposlednee;
			cout << "������� ����� �� 10 �� 9999 : ";
			cin >> n;
			if ((n >= 10) && (n < 10000))
			{

				predposlednee = n / 10;
				predposlednee %= 10;
				cout << predposlednee << endl;
			}
		}
		break;
		default:
			break;
		}
		cout << "�� ������ ���������� ��������? (1)�� (2)��� ";
		cin >> exit;
	} while (exit == 1);

}