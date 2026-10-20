#include <iostream>
using namespace std;

int binarySearch(int data[], int n, int target) {
    // 4 8 12 16 20 24 28
    int low = 0; //indeks
    int high = n-1; // indeks

    while (low <= high) {
        int mid = low + (high - low) / 2; //menghitung indeks middle = 3

        if (data[mid] == target) {
            return mid; //3
        } else if (target < data[mid]) {
            high = mid - 1; // 3-1 = 2 -> high
    
        } else {
            low = mid + 1; // low = 3+1 = 4
        }
    }

    return -1;
}

int main() {
    int data[] = {4, 8, 12, 16, 20, 24, 28};
    int n = 7;
    int target = 20;

    int hasil = binarySearch(data, n, target);// hasil = 4

    if (hasil != -1) {
        cout << "Data ditemukan pada indeks : " << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}