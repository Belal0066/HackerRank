#include <iostream>
#include <cstdio>

using namespace std;

int max_of_four (int a, int b, int c, int d){
  int value;
  int maxValue = -2147483648;

  int num[4] ={a, b, c, d};

  for(int i = 0; i < 4; i++){
    value = num[i];
    if (value > maxValue){
      maxValue = value;
    }
  }
  return maxValue;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
