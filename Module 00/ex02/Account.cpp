#include "Account.hpp"

int	Account::getNbAccounts()
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount()
{
    return (Account::_totalNbDeposits);
}
int	Account::getNbDeposits()
{
    return (this->_nbDeposits);
}

