#include <iostream>
#include <limits>

using namespace std;

void printArray(const int arr[], int size){
    cout<<"Array Elements: ";

    for (int i = 0 ; i< size ; i++){
        cout<<arr[i]<<"";
    }


}

int main()
{
    const int size = 5;
    int numbers[size] = {10, 20, 30, 40, 50};
    printArray(numbers, size);
    return 0;
}