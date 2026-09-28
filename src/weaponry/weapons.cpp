#include "weapons.h"
#include "../inventory/inventory.h"
#include <vector>


weapon Sword;
Sword.attack = []()
{
  std::cout << "OoOohHH sword attack so scary aaaaaaaa\n";
}

void WeaponSlotsInitalization()
{

   weapon_slots.push_back(Sword);
   weapon_slots.push_back(Sword);
   weapon_slots.push_back(Sword);



}



