#include <iostream>
using namespace std;

int main (){
  int age;
  cout << "年齢を入力して下さい";
  cin >> age;
  if(age <= 3)
    cout << "無料です\n";
  else if(age <= 20)
    cout << "1000円です\n";
  else
    cout << "2000円です\n";
  return 0;
}