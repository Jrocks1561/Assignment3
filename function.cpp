#include "Header.h"

using namespace std;

int front(const queue<int>& q) {
    if (!q.empty()) {
        return q.front();
    } else {
        throw runtime_error("Queue is empty!");
    }
}

void printQueue(const queue<int>& q) {
    queue<int> tempQueue = q;

    while (!tempQueue.empty()) {
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;
}

void moveToRear(queue<int>& Q) {
    if (!Q.empty()) {
        int frontElement = Q.front();
        Q.pop();
        Q.push(frontElement);
    }
}

int LinearSearch(queue<int>& items, int target, size_t pos_first) {
    if (pos_first == items.size())
        return -1;

    int frontElement = items.front();
    items.pop();

    if (target == frontElement)
        return pos_first;
    else
        return LinearSearch(items, target, pos_first + 1);
}

void insertion_sort(vector<int>& num) {
    int i, j, key;
    bool insertionNeeded = false;
    for (j = 1; j < num.size(); j++) {
        key = num[j];
        insertionNeeded = false;
        for (i = j - 1; i >= 0; i--) {
            if (key < num[i]) {
                num[i + 1] = num[i];
                insertionNeeded = true;
            } else {
                break;
            }
        }
        if (insertionNeeded) {
            num[i + 1] = key;
        }
    }
}
