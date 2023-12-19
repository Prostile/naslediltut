#include <iostream>
#include "SKbrd.h"
#include "SFile.h"
#include "SQueue.h"
#include "Diap.h"

int main()
{
    setlocale(LC_ALL, "rus");

    Freq firstF, secondF, thirdF; 
    Diap firstD, secondD, thirdD;
    
    SKbrd  aF,             aD;
    SFile  bF("DATA.txt"), bD("DATA.txt");
    SQueue cF(10),         cD(10);


    cout << "============Class Freq=============" << endl;


    cout << "ввод с клавиатуры" << endl;
        firstF.Calc(&aF); cout << firstF << endl;

    cout << "ввод с файла" << endl;
        secondF.Calc(&bF); cout << secondF << endl;

    cout << "ввод с очереди" << endl;
        thirdF.Calc(&cF); cout << thirdF << endl;

    //ios_base::sync_with_stdio(0);
    //cin.ignore(cin.rdbuf()->in_avail()); //очищение буфера cin на всякий случай

    cout << "============Class Diap=============" << endl;


    cout << "ввод с клавиатуры" << endl;
        firstD.Calc(&aD); cout << firstD << endl;

    cout << "ввод с файла" << endl;
        secondD.Calc(&bD); cout << secondD << endl;

    cout << "ввод с очереди" << endl;
        thirdD.Calc(&cD); cout << thirdD << endl;
}
