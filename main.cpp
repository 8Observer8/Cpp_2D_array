#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillArray(int **array, int size) {
    srand (time(NULL));
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            array[row][col] = rand() % 10;
        }
    }
}

void printArray(int **array, int size) {
    srand (time(NULL));
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << array[row][col];
            if (col != size-1) {
                cout << ' ';
            }
            else {
                cout << '\n';
            }
        }
    }
}

int main(int argc, char** argv) {
    int **array;

    // Size of the array
    int N;
    cout << "Enter the size of the array (N): ";
    cin >> N;

    // Allocation
    array = new int*[N];
    for (int i = 0; i < N; i++) {
        array[i] = new int[N];
    }
    
    // Fill the array
    fillArray(array, N);
    
    // Print the array
    printArray(array, N);

    // Deletion
    for (int i = 0; i < N; i++) {
        delete [] array[i];
    }
    delete [] array;

    return 0;
}

