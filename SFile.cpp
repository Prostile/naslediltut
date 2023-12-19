#include "SFile.h"

SFile::SFile(const std::string& filename) {
    file.open(filename);
}

int SFile::Get() {
    int num;
    if (file >> num) {
        return num;
    }
    else {
        file.close();
        return -1;
    }
}