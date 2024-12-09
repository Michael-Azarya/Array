#include <iostream>
using namespace std;

int main (){

    const int JUMLAH_ARRAY {5};
    int arr[JUMLAH_ARRAY] {5,10,15,20,25};

    int sum {0};
    for (int i=0;i<JUMLAH_ARRAY;i++){
        sum += arr[i];
    }
    
    double mean = static_cast<double>(sum) / JUMLAH_ARRAY;

    cout << "Rata-rata: " << mean;



    return 0;
}
