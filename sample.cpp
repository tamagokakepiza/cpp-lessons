#include <iostream>
#include <iomanip>
using namespace std;

int main (){
  int num = 1;
  int count = 0;
  while(num < 1000){
    num *= 2;
    count++;
    cout << count << "回目：" << num << "\n";
  }
  cout << count << "回目で1000を超えます\n";
  return 0;
}