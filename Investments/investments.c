//  Maayez Imam and Abdullah Mohammed 10/18/2017
//  Investments program

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void investments();
double validMonthlyPayment();
double validLoanAmount();
double validLoanInterestRate();
double validMinimumLoanPayment();
int validCurrentAge();
int validRetirementAge(int currentAge);
double validInvestmentInterestRate();
bool validFormatting(int numArgsRead, int numArgsNeeded);
double monthlyPaymentMax(double loanTotal,
                         double paymentMonthly,
                         double interestRateLoan,
                         double interestRateInvestment,
                         int monthsPayment);
double monthlyPaymentMin(double loanTotal,
                         double loanPaymentMin,
                         double paymentMonthly,
                         double interestRateLoan,
                         double interestRateInvestment,
                         int monthsPayment);

int main() {
  investments();
  return 0;
}

void investments() {
  double paymentMonthly;
  double loanTotal;
  double interestRateLoan;
  double loanPaymentMin;
  double interestRateInvestment;
  double totalPaymentMax;
  double totalPaymentMin;
  int ageCurrent;
  int ageRetirement;
  int monthsPayment;

  paymentMonthly = validMonthlyPayment();
  loanTotal = validLoanAmount();
  interestRateLoan = validLoanInterestRate();
  loanPaymentMin = validMinimumLoanPayment();

  if (paymentMonthly < loanPaymentMin) {
    printf("You didn't set aside enough money to pay off our loans. Ending program.\n");
    exit(0);
  }

  ageCurrent = validCurrentAge();
  ageRetirement = validRetirementAge(ageCurrent);
  interestRateInvestment = validInvestmentInterestRate();
  monthsPayment = (ageRetirement - ageCurrent) * 12;

  totalPaymentMax = monthlyPaymentMax(loanTotal,
                                      paymentMonthly,
                                      interestRateLoan,
                                      interestRateInvestment,
                                      monthsPayment);
  totalPaymentMin = monthlyPaymentMin(loanTotal,
                                      loanPaymentMin,
                                      paymentMonthly,
                                      interestRateLoan,
                                      interestRateInvestment,
                                      monthsPayment);

  if(totalPaymentMin > totalPaymentMax) {
    printf("You should only make the minimum payments on your loan and apply the rest towards retirement.\nIf you do you will have $%.2lf when you retire as opposed to $%.2lf if you payed off your loan before investing.\n", totalPaymentMin, totalPaymentMax);
  }

  if(totalPaymentMax > totalPaymentMin) {
    printf("You should apply all $%.2lf towards your loan before making any investments.\nIf you do you will have $%.2lf when you retire as opposed to $%.2lf if you only made minimum payments.\n", paymentMonthly, totalPaymentMax, totalPaymentMin);
  }
}

double validMonthlyPayment() {
  double paymentMonthly;
  int numArgsRead;

  do {
    printf("Enter how much money you will be putting towards loans/retirement each month: ");
    numArgsRead = scanf(" %lf", &paymentMonthly);
  }
  while(!(validFormatting(numArgsRead, 1)) || (!(paymentMonthly >= 0)));
  return paymentMonthly;
}

double validLoanAmount() {
  double loanTotal;
  int numArgsRead;

  do {
    printf("Enter how much you owe in loans: ");
    numArgsRead = scanf(" %lf", &loanTotal);
  }
  while(!(validFormatting(numArgsRead, 1)) || (!(loanTotal >= 0)));
  return loanTotal;
}

double validLoanInterestRate() {
  double interestRateLoan;
  int numArgsRead;

  do {
    printf("Enter the annual interest rate of the loans: ");
    numArgsRead = scanf(" %lf", &interestRateLoan);
  }
  while(!(validFormatting(numArgsRead, 1)) || (!(interestRateLoan >= 0)));
  return interestRateLoan;
  }

double validMinimumLoanPayment() {
  double loanPaymentMin;
  int numArgsRead;

  do {
    printf("Enter your minimum monthly loan payment: ");
    numArgsRead = scanf(" %lf", &loanPaymentMin);
  }
  while(!(validFormatting(numArgsRead, 1)) || (!(loanPaymentMin >= 0)));
  return loanPaymentMin;
}

int validCurrentAge() {
  int ageCurrent;
  int numArgsRead;

  do {
    printf("Enter your current age: ");
    numArgsRead = scanf(" %d", &ageCurrent);
  }
  while(!(validFormatting(numArgsRead, 1)) || (!(ageCurrent >= 0)));
  return ageCurrent;
}

int validRetirementAge(int currentAge) {
  int ageRetirement;
  int numArgsRead;

  do {
    printf("Enter the age you plan to retire at: ");
    numArgsRead = scanf(" %d", &ageRetirement);
  }
  while(!(validFormatting(numArgsRead, 1)) || (!(ageRetirement >= 0)) || (ageRetirement < currentAge));
  return ageRetirement;
}

double validInvestmentInterestRate() {
  double interestRateInvestment;
  int numArgsRead;

  do {
    printf("Enter the annual rate of return you predict for your investments: ");
    numArgsRead = scanf(" %lf", &interestRateInvestment);
  }
  while(!(validFormatting(numArgsRead, 1)) || (!(interestRateInvestment >= 0)));
  return interestRateInvestment;
}


double monthlyPaymentMax(double loanTotal,
                         double paymentMonthly,
                         double interestRateLoan,
                         double interestRateInvestment,
                         int monthsPayment) {
  double savings = 0.00;
  double excess = 0.00;
  int i;

  for (i = 0; i < monthsPayment; ++i) {
    if (loanTotal == 0.00) {
      savings = savings + (savings * (interestRateInvestment / 12));
      savings = savings + paymentMonthly;
    }
    else if ((loanTotal < paymentMonthly)) {
      loanTotal = loanTotal + (loanTotal * (interestRateLoan / 12));
      excess = paymentMonthly - loanTotal;
      savings = savings + excess;
      loanTotal = 0.00;
    }
    else if (loanTotal >= paymentMonthly) {
      loanTotal = loanTotal + (loanTotal * (interestRateLoan / 12));
      loanTotal = loanTotal - paymentMonthly;
    }
  }

  return savings;
}

double monthlyPaymentMin(double loanTotal,
                         double loanPaymentMin,
                         double paymentMonthly,
                         double interestRateLoan,
                         double interestRateInvestment,
                         int monthsPayment) {
  double savings = 0.00, excess = 0.00;
  int i;

  for (i = 0; i < monthsPayment; ++i) {
    if (loanTotal == 0.00) {
      savings = savings + (savings * (interestRateInvestment / 12));
      savings = savings + paymentMonthly;
    }

    else if (loanTotal < loanPaymentMin) {
      loanTotal = loanTotal + (loanTotal * (interestRateLoan / 12));
      excess = paymentMonthly - loanTotal;
      savings = savings + (savings * (interestRateInvestment / 12));
      savings = savings + excess;
      loanTotal = 0.00;
    }

    else if (loanTotal >= loanPaymentMin) {
      loanTotal = loanTotal + (loanTotal * (interestRateLoan / 12));
      loanTotal = loanTotal - loanPaymentMin;
      savings = savings + (savings * (interestRateInvestment / 12));
      savings = savings + (paymentMonthly - loanPaymentMin);
    }
  }

  if (loanTotal > 0.00) {
    printf("Warning! After you retire you will still have $%.2lf in loans left.\n", loanTotal);
  }
  return savings;
}

bool validFormatting(int numArgsRead, int numArgsNeeded) {
  char newLine = '\n';
  bool isValid = true;
  if(numArgsRead != numArgsNeeded) {
    isValid = false;
  }

  do{
    scanf("%c", &newLine);
    if(!isspace(newLine)) {
      isValid = false;
    }
      }
  while(newLine != '\n');

  return isValid;
}