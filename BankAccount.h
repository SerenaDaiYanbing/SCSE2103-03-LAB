/**
 * @file BankAccount.h 
 * Class specification for BankAccount ADT 
 */
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
#include <iostream>

class BankAccount {
/* TODO 1: Add access specifier for private data members */
private:
    std::string accountNumber;
    std::string accountHolder;
    double balance;

/* TODO 2: Add access specifier for public member functions */
public:
    BankAccount();                          // Default Constructor
    // Parameterized Constructor
    BankAccount(std::string accNum, std::string holder, double initialBalance);
    // Destructor
    ~BankAccount();

    bool withdraw(double amount);           // Mutator functions
    void deposit(double amount);

    // TODO 3: Declare getBalance() and display() as CONST member functions
    double getBalance() const;
    void display() const;
};

#endif