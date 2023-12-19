#include "Freq.h"

void Freq::Calc(SBase* pobj)
//����������� ����� Freq, ���������� ����� Calc, ������� ��� ��������� ��������������� ����� ����� ��������� 
//� ��������� ������� ���������� ��������� �����(������������ ��������� map ���������� STL ��� �������� ��� ������ - �������).
//����� ����, � ������ Calc ���������� ���������� ����� ���� ��������� �����.

//����� Calc � ������� Freq � Diap ������ �������� ����� ����� �� ������������� ���������� � ������� ����������� ������� Get.
//������������ ���������� ������ Calc ������ ���� ��������� ��� ������ �� ������� ����� SBase, ����� ������� � ����� ���������� ����� Get,
//���� �� �� ������ ������������� �����.��� ������� Freq � Diap �������������� �������� <<
{
	int k = 0;
	this->SumOfNumbrs= 0;
	cout << "������� ����� ��������������� �����" << endl;
	while ((k = pobj->Get()) != -1) {
		counts[k]++;
	}
	map<int, int>::iterator pm = counts.begin();
	while (pm != counts.end())
	{
		this->SumOfNumbrs += pm->first * pm->second;
		pm++;
	}
}

ostream& operator<<(ostream& stream, Freq& obj)
{
	map<int, int>::iterator pm = obj.counts.begin();
	stream << "���������� ��������� :" << endl;
	while (pm != obj.counts.end())
	{
		stream << pm->first << ": " << pm->second << endl;
		pm++;
	}
	stream << "����� �����: " << obj.SumOfNumbrs << endl;
	return stream;
}