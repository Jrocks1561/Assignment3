#include <iostream>
#include <queue>
#include <vector>
#include "Header.h"
using namespace std;



int main() {
  //push 10 integeres 
    queue<int> data;
    data.push(1);
    data.push(2);
    data.push(3);
    data.push(4);
    data.push(5);
    data.push(6);
    data.push(7);
    data.push(8);
    data.push(9);
    data.push(10);
    cout << "All the items in the queue!" << endl;

    // Print out elemnets
    printQueue(data);

    cout << "Modified queue after popping one element:" << endl;

    // Pop one element from the queue!
    if (!data.empty()) {
        data.pop();
    }

    // Print after popping one element
    printQueue(data);

    // push another value into the queue to get back to 11 elewmwnrts!
    data.push(11);

    cout << "Modified queue after pushing 11:" << endl;

    // Print queue after adding the 11
    printQueue(data);

    cout << "All the items in the queue!" << endl;

    // Print the current status of queue
    printQueue(data);

    // printing the frint elembt if the queu
    try {
        cout << "Front element of the queue: " << front(data) << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
  
//Printing out the size of the queue
    int queueSize = data.size();
    cout << "Size of the queue: " << queueSize << endl;

    cout << "just checking queue looks good" << endl;
    printQueue(data);

    moveToRear(data);
  
  ///Printing out after moving the front element to the back of the queue

    cout << "Queue after moving the front element to the back:" << endl;
    printQueue(data);
//Linear search but it works
    int target = 5;
    int pos = LinearSearch(data, target, 0);

    if (pos != -1)
        cout << "Element " << target << " found at " << pos << endl;
    else
        cout << "Element " << target << " not found in the queue." << endl;

    // Sorting!! :(((
    vector<int> vec;
    while (!data.empty()) {
        vec.push_back(data.front());
        data.pop();
    }

    vec.push_back(data.back());

  
    insertion_sort(vec);

    cout << "Sorted elements of the queue:" << endl;
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
