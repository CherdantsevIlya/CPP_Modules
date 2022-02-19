#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:";
    std::cout << _amount << ";created" << std::endl;
    _nbAccounts++;
    _totalAmount += _amount;
}

Account::~Account()
{
    static int n = 8;
    static int copy_amount[8];

    n--;
    copy_amount[n] = _amount;
    if (_accountIndex == 0)
    {
        for (int i = 0; i < 8; i++)
        {
            _displayTimestamp();
            std::cout << "index:" << i << ";amount:" << copy_amount[i] << ";closed" << std::endl;
            _nbAccounts++;
        }
        return ;
    }
    _nbAccounts--;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:";
    std::cout << _amount << ";deposit:" << deposit;
    _amount += deposit;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << ++_nbDeposits;
    std::cout << std::endl;
    _totalNbDeposits++;
    _totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
    bool status = true;

    _displayTimestamp();
    if (_amount < withdrawal)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
        status = false;
	}
    else
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";";
        std::cout << "withdrawal:" << withdrawal << ";amount:";
        _amount -= withdrawal;
        std::cout << _amount << ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
    }
    return status;
}

void Account::_displayTimestamp()
{
    time_t	cur_time = time(NULL);
    char	buff[16];

    strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&cur_time));
    std::cout << "[" << buff << "] ";
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals;
    std::cout << std::endl;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
}


