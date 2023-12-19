#include "Freq.h"

void Freq::Calc(SBase* pobj)
//Реализовать класс Freq, содержащий метод Calc, который для множества неотрицательных целых чисел вычисляет 
//и сохраняет частоты повторения различных чисел(использовать контейнер map библиотеки STL для хранения пар «число - счетчик»).
//Кроме того, в методе Calc необходимо подсчитать сумму всех введенных чисел.

//Метод Calc в классах Freq и Diap должен получать целые числа от произвольного поставщика с помощью виртуальной функции Get.
//Единственным параметром метода Calc должен быть указатель или ссылка на базовый класс SBase, через которую в цикле вызывается метод Get,
//пока он не вернет отрицательное число.Для классов Freq и Diap переопределить оператор <<
{
	int k = 0;
	this->SumOfNumbrs= 0;
	cout << "введите целые неотрицательные числа" << endl;
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
	stream << "количество элементов :" << endl;
	while (pm != obj.counts.end())
	{
		stream << pm->first << ": " << pm->second << endl;
		pm++;
	}
	stream << "сумма чисел: " << obj.SumOfNumbrs << endl;
	return stream;
}