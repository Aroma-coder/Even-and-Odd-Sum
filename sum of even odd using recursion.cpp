#include <iostream>
using namespace std;
int even_odd_Sum(int start, int end, int & evenSum, int & oddSum) {
  if (start > end)
    return 0;
  if (start % 2 == 0)
    evenSum += start;
  else
     oddSum += start;
 return even_odd_Sum(start + 1, end, evenSum, oddSum);
}
int main() {
  int start, end,eSum,oSum;
   cout << "Input the starting number: ";
   cin >> start;
   cout << "Input the ending number: ";
   cin >> end;
  
  even_odd_Sum(start, end, eSum, oSum);
   cout << "Sum of even numbers: " << eSum <<  endl;
   cout << "Sum of odd numbers: " << oSum <<  endl;
  return 0;
}
