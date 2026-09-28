#pragma once
#include <functional>




struct weapon
{

  int WeaponNum;

  std::function<void()> Attack;
};
