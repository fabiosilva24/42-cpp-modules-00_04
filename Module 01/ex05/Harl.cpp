#include "Harl.hpp"

void Harl::complain(std::string level)
{
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  void (Harl::*function_pointer[])() =
      {&Harl::debug,
       &Harl::info,
       &Harl::warning,
       &Harl::error};

  for (int i = 0; i < 4; i++)
  {
    if (levels[i] == level)
    {
      (this->*function_pointer[i])();
      break;
    }
  }
}
