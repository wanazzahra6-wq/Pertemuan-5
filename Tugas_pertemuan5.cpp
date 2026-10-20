#include <iostream>
#include <algorithm> // untuk fungsi sort()

using namespace std;
int binarySearch(int data[], int n, int target) {
    int low = 0; // indeks awal
    int high = n - 1; // indeks akhir

    while (low <= high) {
        int mid = low + (high - low) / 2; // menghitung indeks middle

        if (data[mid] == target) {
            return mid; 
        } else if (target < data[mid]) {
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }

    return -1;
}

int main() {
    int n, target;

    cout << "Masukkan jumlah data nilai mahasiswa: ";
    cin >> n;

    int data[100]; // array kapasitas maksimal 100

    cout << "Masukkan " << n << " nilai mahasiswa:\n";
    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << (i + 1) << ": ";
        cin >> data[i];
    }

    sort(data, data + n);

    cout << "\nData setelah diurutkan (ascending): ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;

    int hasil = binarySearch(data, n, target);

    if (hasil != -1) {
        cout << "Data ditemukan pada indeks ke-" << hasil << " (setelah diurutkan)." << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    return 0;
}
