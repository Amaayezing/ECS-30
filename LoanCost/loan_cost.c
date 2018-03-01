//Maayez Imam 10/2/2017
//Loan cost program

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int loan_cost() {
  double pow
  printf("Please enter the amount of money you borrowed: $");
  double Borrowed;
  scanf("%lf", &Borrowed);
  printf("Please enter the annual interest rate: ");
  double AnnualInterestRate;
  scanf("%lf", &AnnualInterestRate);
  printf("Please enter the number of payments to be made: ");
  int Payments;
  scanf("%d", &Payments);

  double MonthlyInterestRate = AnnualInterestRate / 12;
  double MonthlyPayment = (MonthlyInterestRate * Borrowed) / (1 - (pow(1 + MonthlyInterestRate, -Payments)));
  double LoanCost = Payments * MonthlyPayment;
  double FinalLoanCost = LoanCost - Borrowed;

  printf("A loan of $%lf with an annual interest of %lf payed off over %d months will have monthly payments of $%lf.", Borrowed, AnnualInterestRate, Payments, MonthlyPayment);
  printf("In total you will pay $%lf, making the cost of your loan $%lf", LoanCost, FinalLoanCost);
}