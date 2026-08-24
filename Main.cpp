#include <iostream>
#include "Investment.h"

int main() {
    double initialInvestment = -1.0;
    double monthlyDeposit = -1.0;
    double annualInterestRate = -1.0;
    int numberOfYears = -1;
    char userChoice = 'y';

    while (userChoice == 'y' || userChoice == 'Y') {
        // Display User Interface Header with different boarder
        std::cout << "********************************\n";
        std::cout << "          Data Input            \n";
        std::cout << "********************************\n";

        // Input validation for Initial Investment
        while (initialInvestment < 0) {
            std::cout << "Initial Investment Amount: $";
            std::cin >> initialInvestment;
            if (initialInvestment < 0) {
                std::cout << "Error: Amount must be 0 or greater.\n";
            }
        }

        // Input validation for Monthly Deposit
        while (monthlyDeposit < 0) {
            std::cout << "Monthly Deposit: $";
            std::cin >> monthlyDeposit;
            if (monthlyDeposit < 0) {
                std::cout << "Error: Deposit must be 0 or greater.\n";
            }
        }

        // Input validation for Annual Interest Rate
        while (annualInterestRate < 0) {
            std::cout << "Annual Interest Rate (e.g., 5 for 5%): ";
            std::cin >> annualInterestRate;
            if (annualInterestRate < 0) {
                std::cout << "Error: Interest rate must be greater than or equal to 0.\n";
            }
        }

        // Input validation for Number of Years
        while (numberOfYears <= 0) {
            std::cout << "Number of Years: ";
            std::cin >> numberOfYears;
            if (numberOfYears <= 0) {
                std::cout << "Error: Number of years must be greater than 0.\n";
            }
        }

        // Pause or prompt user to continue
        std::cout << "\nPress Enter to view your investment reports...";
        std::cin.ignore();
        std::cin.get();

        // Create Investment object
        Investment myInvestment(initialInvestment, monthlyDeposit, annualInterestRate, numberOfYears);

        // Call report
        myInvestment.displayWithoutMonthlyDeposit();
        myInvestment.displayWithMonthlyDeposit();

        // Prompt to run again
        std::cout << "\nWould you like to test another investment? (y/n): ";
        std::cin >> userChoice;

        // Reset values for loop iteration
        if (userChoice == 'y' || userChoice == 'Y') {
            initialInvestment = -1.0;
            monthlyDeposit = -1.0;
            annualInterestRate = -1.0;
            numberOfYears = -1;
            std::cout << "\n";
        }
    }
    // Tried to make it more ATM like
    std::cout << "Thank you for using Airgead Banking Investment Calculator!\n";
    return 0;
}