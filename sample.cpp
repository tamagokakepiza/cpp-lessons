#include <iostream>
using namespace std;

void culc(int a, int b){
  int sum;
  sum = (300*a) + (200*b);
  cout << "合計金額は" << sum << "円です\n";
}

int main (){
  int apple, orange;
  cout << "りんごの個数は？";
  cin >> apple;
  cout << "オレンジの個数は？";
  cin >> orange;
  culc(apple, orange);
  return 0;
}