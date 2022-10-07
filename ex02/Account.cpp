#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
    std::cout << "hey i am void" << std::endl;
}
Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:"
             <<_amount << ";closed" << std::endl;
}
Account::Account(int initial_deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}
void Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:";
    _amount += deposit;
    std::cout << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
    int save;
    save = _amount;
    _displayTimestamp();
    if (_amount > withdrawal)
    {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
    std::cout << "index:" << _accountIndex << ";p_amount:" << save << ";withdrawal:";
    std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (1);
    }
    std::cout << "index:" << _accountIndex << ";p_amount:" << save << ";withdrawal:refused" << std::endl;

    return (0);
}
int Account::checkAmount(void) const
{
    return (_amount);
}
void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
              << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
    return (_totalAmount);
}
int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
              << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::_displayTimestamp(void)
{
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeinfo);
    // std::string str(buffer);
    std::cout << buffer << " ";
}