#include <iostream>
#include <vector>
#include "stringdata.cpp"
using namespace std;

int linearSearch(vector<string> container, string element) {
    for (int i = 0; i < container.size(); i++) {
        if (container[i] == element) {
            return i;
        }
    }
    return -1;
}

int binarySearch(vector<string> container, string element) {
    int low = 0;
    int high = container.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (element < container[mid]) {
            high = mid - 1;
        } else if (element > container[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<string> data = getStringData();
    long long beginTime;
    long long endTime;
    int index;
    long long timeElapsed;

    //Begins testing with the word "not_here"
    cout << "Word: \"not_here\"" << endl;

    //Linear Search
    beginTime = systemTimeNanoseconds();
    index = linearSearch(data, "not_here");
    endTime = systemTimeNanoseconds();
    timeElapsed = endTime - beginTime;
    cout << "Linear Search: Index = " << index << ", Time Elapsed: " << timeElapsed << endl;

    //Binary Search
    beginTime = systemTimeNanoseconds();
    index = binarySearch(data, "not_here");
    endTime = systemTimeNanoseconds();
    timeElapsed = endTime - beginTime;
    cout << "Binary Search: Index = " << index << ", Time Elapsed: " << timeElapsed << endl;

    cout << endl; //Concludes testing and returns to next line

    //Begins testing with the word "mzzzz"
    cout << "Word: \"mzzzz\"" << endl;

    //Linear Search
    beginTime = systemTimeNanoseconds();
    index = linearSearch(data, "mzzzz");
    endTime = systemTimeNanoseconds();
    timeElapsed = endTime - beginTime;
    cout << "Linear Search: Index = " << index << ", Time Elapsed: " << timeElapsed << endl;

    //Binary Search
    beginTime = systemTimeNanoseconds();
    index = binarySearch(data, "mzzzz");
    endTime = systemTimeNanoseconds();
    timeElapsed = endTime - beginTime;
    cout << "Binary Search: Index = " << index << ", Time Elapsed: " << timeElapsed << endl;

    cout << endl; //Concludes testing and returns to next line

    //Begins testing with the word "aaaaa"
    cout << "Word: \"aaaaa\"" << endl;

    //Linear Search
    beginTime = systemTimeNanoseconds();
    index = linearSearch(data, "aaaaa");
    endTime = systemTimeNanoseconds();
    timeElapsed = endTime - beginTime;
    cout << "Linear Search: Index = " << index << ", Time Elapsed: " << timeElapsed << endl;

    //Binary Search
    beginTime = systemTimeNanoseconds();
    index = binarySearch(data, "aaaaa");
    endTime = systemTimeNanoseconds();
    timeElapsed = endTime - beginTime;
    cout << "Binary Search: Index = " << index << ", Time Elapsed: " << timeElapsed << endl;

    cout << endl; //Concludes testing and returns to next line
    return 0;
}
