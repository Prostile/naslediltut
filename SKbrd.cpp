#include "SKbrd.h"
#include <iostream>
#include <string>

int SKbrd::Get(){
    std::string s;
    std::cin >> s;
    try {
        int num = stoi(s);
        return num;
    }
    catch (...) {
        _flushall();
        return -1;
    }
}