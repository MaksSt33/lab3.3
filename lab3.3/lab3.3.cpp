// Lab_03_3.cpp
// ������ ������ �����������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 15 

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double R1; // ������� ��������
	double R2; // ������� ��������
	double y; // ��������� ���������� ������

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = ";  cin >> x;

	// ������������ � ������ ����
	if (x <= -6)
		y = R2 / 2;
	else
		if (-6 < x && x <= -2 * R2)
			y = R2 / 2 - (R2 * x - 6 * R2) / 2(-2 * R2 - 6);
		else
			if (-2 * R2 < x && x <= 0)
				y = sqrt(R * R - x * x - 2 * x * R2 - R2 * R2);
			else
				if (0 < x && x <= 2 * R1)
					y = -1 * sqrt(R * R - x * x + 2 * x * R1 - R1 * R1);
				else
					y = -R1 * x + 2 * R1 * R1;

	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}

