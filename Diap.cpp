#include "Diap.h"

Diap::Diap() :min(10000), max(0), CountOFNumbers(0){}

void Diap::Calc(SBase* pobj) {
	cout << "введите целые неотрицательные числа" << endl;
	int k = 0;
	while ((k = pobj->Get()) != -1) {
		counts[k]++;
	}
	map<int, int>::iterator pm = counts.begin();
	while (pm != counts.end())
	{
		if (this->max <= pm->first)this->max = pm->first;
		if (this->min >= pm->first)this->min = pm->first;
		this->CountOFNumbers += pm->second;
		pm++;
	}
}


ostream& operator<<(ostream& stream, Diap& obj) {
	map<int, int>::iterator pm = obj.counts.begin();
	stream << "количество элементов :" << endl;
	while (pm != obj.counts.end())
	{
		stream << pm->first << ": " << pm->second << endl;
		pm++;
	}
	stream << "количество чисел: " << obj.CountOFNumbers << endl;
	stream << "максимальное число: " << obj.max << endl;
	stream << "минимальное число: " << obj.min << endl;
	return stream;
}