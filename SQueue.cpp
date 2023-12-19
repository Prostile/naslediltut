#include "SQueue.h"

SQueue::SQueue(int length): length(length), current(0) {
    for (int i = 0; i < length ; i++) {
        que.push_back(std::rand() % 100);
    }
}

int SQueue::Get() {
    if (current < length) {
        return que[current++];
    }
    else {
        return -1;
    }
}