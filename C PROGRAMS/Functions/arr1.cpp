#include "iostream";

using namespace std;

int main() {
  int n, totalSalary = 0;

  cout << "How many employees do you pay? " << endl;
  cin >> n;
  int salary[n];
  string Names[n][10];
  for (int i = 0; i < n; ++i) {
    for (int x = 0; x < n; ++x) {
      cout << "Enter the name for the employee"<< x+1 << endl;
      cin >> Names[i][x];
      cout << "Enter the salary for employee" << x+1 << endl;
      cin >> salary[i];
    }
  }

  cout << "No \t Names \t Salary" << '\n';

  for (int i = 0; i < n; i++) {
    for (int x = 0; x < 10; x++) {
      cout << i+1 <<'\t'<< Names[i][x] <<'\t'<< salary[i] << endl;
      totalSalary += salary[i];
    }
  }

  std::cout << "The total salary for all employees = " << totalSalary << endl;

  return 0;
}
