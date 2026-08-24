# CS-210-CPlusPlus

# CS-210 Investment Calculator

## Summary and Problem Solved
This project is an interactive C++ console application developed for Airgead Banking. It functions as an investment and compound interest calculator designed to help users project the growth of their savings over time. The program addresses the need for clear financial modeling by taking an initial investment amount, monthly deposits, annual interest rates, and the number of years, and then generating two detailed financial reports:
1. **Year-End Balances Without Additional Monthly Deposits**
2. **Year-End Balances With Additional Monthly Deposits**

Each report breaks down the year, opening amount, earned interest, closing balance, and total interest accumulated, providing a transparent view of long-term compounding growth.

## What Was Done Particularly Well
* **User Experience & Input Validation:** The program implements robust input loops to ensure users cannot input invalid values (such as negative investment amounts or zero-division errors), keeping the application stable and reliable.
* **Formatted Financial Output:** Using C++ formatting manipulators (`<iomanip>`), the program presents all monetary values neatly aligned to two decimal places, matching professional financial reporting standards.
* **Modular Design:** The calculation logic and user interface/display functions are cleanly separated, making the code much easier to read and test.

## Areas for Improvement & Enhancement
If expanded for production or enterprise use, several improvements could be made:
* **Security & Input Sanitization:** Adding more robust checks for non-numeric inputs (e.g., handling strings entered when integers or doubles are expected) would prevent infinite loops or crashes.
* **Scalability:** Implementing object-oriented programming (OOP) principles by creating a dedicated `Investment` or `Account` class would make the program much easier to scale if additional account types or tax variables need to be introduced later.
* **User Interface:** Transitioning the application from a terminal/console window to a graphical user interface (GUI) or a web-based tool would make it vastly more accessible to everyday banking customers.

## Challenges and Overcoming Them
* **Compound Math Logic:** Balancing the compounding formula across monthly increments while keeping track of year-end totals required careful loop structuring and variable tracking. I overcame this by breaking the compounding algorithm down on paper, tracing the math step-by-step for a 1-year scenario, and then translating that logic into clean `for` loops.
* **Support Network:** I utilized course text resources, C++ reference documentation (`cppreference.com`), and debugging tools to systematically verify math outputs against manual calculations.

## Transferable Skills
* **Input Validation & Error Handling:** The pattern used for sanitizing user inputs translates directly to almost any programming language or software engineering task involving user interaction.
* **Algorithmic Thinking:** Breaking financial requirements down into modular mathematical steps reinforces core problem-solving logic applicable to data structures and backend logic in future courses.
* **Clean Code Standards:** Practicing proper variable naming, indentation, and code comments directly supports industry software maintenance standards.

## Maintainability, Readability, and Adaptability
* **Clear Naming Conventions:** Variables and functions were given descriptive names (e.g., `calculateBalanceWithoutMonthlyDeposit`), making the source code self-documenting.
* **Consistent Formatting:** Clean indentation and logical grouping of blocks make it straightforward for other developers to read and audit.
* **Comments:** Meaningful comments explain *why* specific calculations or validation loops are occurring, ensuring adaptability if interest formulas or compounding frequencies need to change in the future.
