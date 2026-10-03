#include "weapons.h"
#include "../inventory/inventory.h"
#include <vector>


weapon Dagger;
Dagger.attack = []()
{
  std::cout << "OoOohHH sword attack so scary aaaaaaaa\n";
}

Dagger.PositionInTextures = 0;

void WeaponSlotsInitalization()
{

   weapon_slots.push_back(Dagger);
   weapon_slots.push_back(Dagger);
   weapon_slots.push_back(Dagger);



}



