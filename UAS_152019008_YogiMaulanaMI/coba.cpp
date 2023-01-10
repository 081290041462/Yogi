#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Nama : Yogi Maulana Malik Ibrahim" << endl;
    cout << "NRP : 152109008" << endl;
    cout << " " << endl;
    cout << "Masukkan jumlah pasangan data: ";
    cin >> n;

    int x[n], y[n];
    for (int i = 0; i < n; i++) {
        bool valid = false;
        while (!valid) {
            cout << "Masukkan nilai x pasangan ke-" << i+1 << ": ";
            cin >> x[i];
            if (x[i] >= 0) {
                valid = true;
            } else {
                cout << "Nilai x tidak valid. Masukkan nilai yang lebih dari atau sama dengan 0: ";
            }
        }
        valid = false;
        while (!valid) {
            cout << "Masukkan nilai y pasangan ke-" << i+1 << ": ";
            cin >> y[i];
            if (y[i] >= 0) {
                valid = true;
            } else {
                cout << "Nilai y tidak valid. Masukkan nilai yang lebih dari atau sama dengan 0: ";
            }
        }
    }

    float sum_xy = 0, sum_x = 0, sum_y = 0, sum_x2 = 0, sum_y2 = 0;
    for (int i = 0; i < n; i++) {
sum_xy += x[i] * y[i];
sum_x += x[i];
sum_y += y[i];
sum_x2 += x[i] * x[i];
sum_y2 += y[i] * y[i];
}

float r = (sum_xy - (sum_x * sum_y) / n) / sqrt((sum_x2 - (sum_x * sum_x) / n) * (sum_y2 - (sum_y * sum_y) / n));

if(r >= -1 && r <= 1 ){
cout << "Nilai korelasi r: " << r << endl;
}else{
cout << "Nilai korelasi tidak valid" << endl;
}
float r_square = r * r;
float determinasi = r_square * 100;
if(determinasi >= 0 && determinasi <= 100){
cout << "Nilai koefisien determinasi : " << determinasi << "%" << endl;
}else{
cout << "Nilai koefisien determinasi tidak valid" << endl;
}
if (r > 0) {
cout << "Hubungan antara variable x dan y adalah positif, dimana jika nilai x bertambah, maka nilai Y akan meningkat, dan juga sebaliknya" << endl;
} else if (r < 0) {
cout << "Hubungan antara variable x dan y adalah negatif, dimana jika nilai x bertambah, maka nilai Y akan menurun, dan juga sebaliknya" << endl;
} else {
cout << "Tidak ada Hubungan antara variable x dan y " << endl;
}
return 0;
}