#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int i = 0 ;
    cin >> i;
    int array[i];
    for (int j = 0; j < i; j++){
      cin >> array[j];
    }
    for (int j = i-1; j >= 0; j--){
      cout << array[j]<< " ";
    }



    return 0;
}
