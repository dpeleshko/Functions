// Overloading.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <cmath>
#include <iostream>
double square(double d1) {
	return 3.14*d1*d1;
}
double square(double d1, double d2) {
	return d1*d2;
}
double square(double d1, double d2, double d3) {
	double p = (d1 + d2 + d3) / 2;
	return sqrt(p*(p - d1)*(p - d2)*(p - d3));
}

void main()
{
	std::cout << "����� �����" << square(1) << '\n';
	std::cout << "����� ������������ "<< square(1,2)<<'\n';
	std::cout << "����� ����������" << square(1,2,3)<<'\n';
}




