#include <iostream>
using namespace std;

int main() {
  int Array[5] = {4, 2, 7, 1, 5};
  int banyak_array = 5;

  int sum = 0;

  for(int i = 0; i < banyak_array; i++)
  {
    sum = sum + Array[i];
  }
  cout << "Jumlah elemen: " << sum;
}