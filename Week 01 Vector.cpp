#include <iostream>
using namespace std;

class Vector {
private:
    int* arr = nullptr;
    int size;

public:
    Vector(int size) : size(size) {
        arr = new int[size];
    }
    ~Vector() {
        delete[] arr;
        arr = nullptr;
    }

    // #Problem 1
    void Right_rotation() {
        int last = arr[size - 1];
        for (int i = size - 2; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = last;
    }


    // #Problem 2
    void left_rotation() {
        int first = arr[0];
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = first;
    }

    // #Problem 3
    void Right_rotation_times(int times) {
        times %= size;
        while (times--) {
            int last = arr[size - 1];
            for (int i = size - 1; i >= 0; i--) {
                arr[i + 1] = arr[i];
            }
            arr[0] = last;
        }
    }

    // #Problem 4
    int pop(int idx) {
        int rm_element = arr[idx];
        for (int i = idx; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
        return rm_element;
    }

    // #Problem 5
    int find_transposition(int value) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value && i != 0) { // Found.
                swap(arr[i], arr[i - 1]);
                return i - 1;
            }
            if (arr[i] == value && i == 0) // Found but in the 1st place.
                return 0;
        }
        return -1; // Not found.
    }

};

int main()
{
    
}
