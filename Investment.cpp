#include <iostream>
#include <iomanip>
#include "Investment.h"

// Constructor definition
Investment::Investment(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterestRate, int t_numberOfYears) {
    m_initialInvestment = t_initialInvestment;
    m_monthlyDeposit = t_monthlyDeposit;
    m_annualInterestRate = t_annualInterestRate;
    m_numberOfYears = t_numberOfYears;
}

// Get
double Investment::getInitialInvestment() const { return m_initialInvestment; }
double Investment::getMonthlyDeposit() const { return m_monthlyDeposit; }
double Investment::getAnnualInterestRate() const { return m_annualInterestRate; }
int Investment::getNumberOfYears() const { return m_numberOfYears; }

// Display report without monthly deposits with fun boarder
void Investment::displayWithoutMonthlyDeposit() const {
    std::cout << "\n===============================================================\n";
    std::cout << "     Balance and Interest Without Additional Monthly Deposits     \n";
    std::cout << "===============================================================\n";
    std::cout << std::setw(10) << "Year"
        << std::setw(25) << "Year-End Balance"
        << std::setw(25) << "Earned Interest" << std::endl;
    std::cout << "---------------------------------------------------------------\n";

    double currentBalance = m_initialInvestment;

    for (int year = 1; year <= m_numberOfYears; ++year) {
        double yearlyInterestEarned = 0.0;

        // Compound interest calculated monthly
        for (int month = 0; month < 12; ++month) {
            double monthlyInterest = (currentBalance) * ((m_annualInterestRate / 100.0) / 12.0);
            yearlyInterestEarned += monthlyInterest;
            currentBalance += monthlyInterest;
        }

        std::cout << std::setw(6) << year
            << std::setw(25) << std::fixed << std::setprecision(2) << currentBalance
            << std::setw(25) << yearlyInterestEarned << std::endl;
    }
}

// Display report with monthly deposits
void Investment::displayWithMonthlyDeposit() const {
    std::cout << "\n===============================================================\n";
    std::cout << "      Balance and Interest With Additional Monthly Deposits      \n";
    std::cout << "===============================================================\n";
    std::cout << std::setw(10) << "Year"
        << std::setw(25) << "Year-End Balance"
        << std::setw(25) << "Earned Interest" << std::endl;
    std::cout << "---------------------------------------------------------------\n";

    double currentBalance = m_initialInvestment;

    for (int year = 1; year <= m_numberOfYears; ++year) {
        double yearlyInterestEarned = 0.0;

        // Compound interest calculated monthly with monthly deposit included
        for (int month = 0; month < 12; ++month) {
            double monthlyInterest = (currentBalance + m_monthlyDeposit) * ((m_annualInterestRate / 100.0) / 12.0);
            yearlyInterestEarned += monthlyInterest;
            currentBalance += m_monthlyDeposit + monthlyInterest;
        }

        std::cout << std::setw(6) << year
            << std::setw(25) << std::fixed << std::setprecision(2) << currentBalance
            << std::setw(25) << yearlyInterestEarned << std::endl;
    }
}