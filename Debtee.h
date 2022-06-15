#pragma once
#include <iostream>
class Debtee
{

	std::string name;
	double balance;
	double interestRate;
	double minPayment;
	double maxPayment;
	int payStreak;
	bool onTime;
public:
	Debtee(std::string name, double balance, double interestRate, double minPayment, double maxPayment, int payStreak, bool onTime);

	std::string get_name();
	double get_balance();
	double get_interestRate();
	double get_minPayment();
	double get_maxPayment();
	int get_payStreak();
	bool status();
	void latePenalty();
	void lateFee();
};


