#include "weapons.h"
#include "../inventory/inventory.h"
#include <vector>
#include <iostream>


void WeaponSlotsInitalization()
{
    weapon Dagger;
    Dagger.Attack = []()
    {
      std::cout << "OoOohHH sword attack so scary aaaaaaaa\n";
    };

    Dagger.PositionInTextures = 0;

   weapon_slots.push_back(Dagger);
   weapon_slots.push_back(Dagger);
   weapon_slots.push_back(Dagger);



}
