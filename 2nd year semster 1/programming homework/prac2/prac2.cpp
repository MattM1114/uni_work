#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables
    string name;
    double currentBalance;
    int numWithdrawals;
    const double ADMIN_FEE = 5.00;
    const double WITHDRAWAL_FEE = 22.50;
    const double OVERDRAFT_PENALTY = 375.00;

    // Prompt user for account holder's details
    cout << "Please enter your name: " << endl;
    getline(cin, name);  // Allows input with spaces
    cout << "Please enter your current balance: " << endl;
    cin >> currentBalance;

    // Validate the number of withdrawals (non-negative)
    do {
        cout << "Please enter the number of withdrawals (it can't be negative): " << endl;
        cin >> numWithdrawals;
    } while (numWithdrawals < 0);

    // Process the withdrawals
    double totalFees = ADMIN_FEE;  // Start with monthly admin fee

    if (numWithdrawals > 4) {
        for (int i = 5; i <= numWithdrawals; i++) {
            totalFees += WITHDRAWAL_FEE;  // Charge R22.50 for each additional withdrawal after the first 4
        }
    }

    // Deduct fees from the current balance
    currentBalance -= totalFees;

    // Apply overdraft penalty if balance is negative
    if (currentBalance < 0) {
        cout << "Your account balance has gone negative. Applying overdraft penalty of R375.00." << endl;
        currentBalance -= OVERDRAFT_PENALTY;
    }

    // Display final output
    cout << "\nAccount Summary for " << name << ":" << endl;
    cout << "Monthly admin fee: R" << ADMIN_FEE << endl;
    cout << "Total withdrawal charges: R" << (totalFees - ADMIN_FEE) << endl;
    cout << "Final account balance: R" << currentBalance << endl;

    // Exit program
    return 0;
}

