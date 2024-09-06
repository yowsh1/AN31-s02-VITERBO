#include <iostream>
#include <limits>

using namespace std;

void modifyElement(int arr[], int size, int modify) {
    int value;
    cout << "Input the value: ";
    cin >> value;
    arr[modify] = value;
}

void minMax(int arr[], int size) {
    int min = numeric_limits<int>::max();
    int max = numeric_limits<int>::min();

    for (int i = 0; i < size ; i++){
        cout<<arr[i]<<"";
    }
 
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }


    cout << "Max value is: " << max << endl;
    cout << "Min value is: " << min << endl;
}

int main() {
    int size = 5;
    int numbers[size] = {10, 20, 30, 40, 50};
    int modify;
    int choice;

    cout << "What function do you want to use? (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "What element do you want to modify? (index): ";
        cin >> modify;

        if (modify >= 0 && modify < size) {
            modifyElement(numbers, size, modify);
        } else {
            cout << "Invalid index" << endl;
        }

        cout << "Modified array elements: ";
        for (int i = 0; i < size; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    } else if (choice == 2) {
        minMax(numbers, size);
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
