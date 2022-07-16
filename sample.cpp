#include <iostream>
using namespace std;

int main (){
  int num;
  cout << "数値を入力して下さい";
  cin >> num;
  if(num == 10){
    cout << "10と同じです\n";
    cout << "正解です\n";
  }
  return 0;
}