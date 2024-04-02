#ifndef QUEUE_OPERATIONS_H
#define QUEUE_OPERATIONS_H

#include <iostream>
#include <queue>
#include <vector>

// Function declarations
int front(const std::queue<int>& q);
void printQueue(const std::queue<int>& q);
void moveToRear(std::queue<int>& Q);
int LinearSearch(std::queue<int>& items, int target, size_t pos_first);
void insertion_sort(std::vector<int>& num);

#endif // QUEUE_OPERATIONS_H
