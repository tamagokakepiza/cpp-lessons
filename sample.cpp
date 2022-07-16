#include <iostream>
using namespace std;

int main (){
  int num;
  cout << "数値を入力して下さい";
  cin >> num;
  if(num >= 5 && num <= 10)
    cout << "5と10の間にあります\n";
  return 0;
}