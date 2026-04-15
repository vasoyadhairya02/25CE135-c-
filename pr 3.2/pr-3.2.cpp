#include <iostream>
using namespace std;

int recursiveSum(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n-1] + recursiveSum(arr, n-1);
}

int iterativeSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    cout<<"Name : Dhairya Vasoya"<<endl;
    cout<<"ID : 25CE135"<<endl;
    int n;
    cout << "Enter size: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Recursive Sum: " << recursiveSum(arr, n) << endl;
    cout << "Iterative Sum: " << iterativeSum(arr, n) << endl;

    delete[] arr;
    return 0;
}
