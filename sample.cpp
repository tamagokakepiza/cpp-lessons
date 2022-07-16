#include <iostream>
using namespace std;

int culc(int a){
  int sum;
  sum = a * 200;
  return sum;
}

int main (){
  int apple;
  cout << "りんごの個数は？";
  cin >> apple;
  int judge = culc(apple);
  if(judge > 3000)
    cout << "予算オーバーです\n";
  else
    cout << "購入できます";
  return 0;
}