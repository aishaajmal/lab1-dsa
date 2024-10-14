#include <iostream>
#include <string>

using namespace std;

// Function to perform linear search
template <typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

// Template function to print search result
template <typename T>
void printSearchResult(int index, T key) {
    if (index != -1) {
        cout << "Found " << key << " at index " << index << endl;
    }
    else {
        cout << key << " not found in the array." << endl;
    }
}

int main() {
    // Test with an integer array of size 5
    int intArray[5] = { 64, 25, 12, 22, 11 };
    int intKey = 12;
    int intIndex = linearSearch(intArray, 5, intKey);
    printSearchResult(intIndex, intKey);

    // Test with a float array of size 4
    float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
    float floatKey = 1.62;
    int floatIndex = linearSearch(floatArray, 4, floatKey);
    printSearchResult(floatIndex, floatKey);

    // Test with a string array of size 4
    string stringArray[4] = { "apple", "orange", "banana", "grape" };
    string stringKey = "banana";
    int stringIndex = linearSearch(stringArray, 4, stringKey);
    printSearchResult(stringIndex, stringKey);

    return 0;
}
