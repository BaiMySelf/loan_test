#include "Debtee.h"
#include <iostream>


bool Debtee::status() {
	return Debtee::onTime;
}
void Debtee::lateFee() {
	Debtee::balance = Debtee::balance * Debtee::interestRate;
}
void Debtee::latePenalty() {
	Debtee::interestRate = Debtee::interestRate + 0.01;
}
int Debtee::get_payStreak() {
	return Debtee::payStreak;
}
double Debtee::get_maxPayment() {
	return Debtee::maxPayment;
}
double Debtee::get_minPayment() {
	return Debtee::minPayment;
}
double Debtee::get_interestRate() {
	return Debtee::interestRate;
}
double Debtee::get_balance() {
	return Debtee::balance;
}
std::string Debtee::get_name() {
	return Debtee::name;
}