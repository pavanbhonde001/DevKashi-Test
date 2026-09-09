#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal = 10000.0;  // Initial investment ($10,000)
    double rate = 0.05;          // 5% interest rate
    int timesCompounded = 12;    // Compounded monthly
    int years = 10;              // Duration of 10 years

    double amount = principal * pow((1 + (rate / timesCompounded)), (timesCompounded * years));
    double interestEarned = amount - principal;

    cout << "Total Balance: $" << amount << endl;
    cout << "Total Interest Earned: $" << interestEarned << endl;

    return 0;
}
