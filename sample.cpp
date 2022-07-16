#include <iostream>
using namespace std;

void twice(int x){
  cout << x * 2 << "\n";
}

int main (){
  int num;
  cout << "数値を入力して下さい\n";
  cin >> num;
  twice(num);
  return 0;
}