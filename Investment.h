#ifndef INVESTMENT_H
#ifndef INVESTMENT_H
#define INVESTMENT_H

class Investment {
private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterestRate;
    int m_numberOfYears;

public:
    // Constructor
    Investment(double t_initialInvestment, double t_monthlyDeposit, double t_annualInterestRate, int t_numberOfYears);

    // Accessors (Getters)
    double getInitialInvestment() const;
    double getMonthlyDeposit() const;
    double getAnnualInterestRate() const;
    int getNumberOfYears() const;

    // Calculation and Display Methods
    void displayWithoutMonthlyDeposit() const;
    void displayWithMonthlyDeposit() const;
};

#endif
#endif#pragma once
