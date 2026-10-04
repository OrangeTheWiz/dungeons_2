#include "weapons.h"
#include "../inventory/inventory.h"
#include <vector>
#include <iostream>

std::vector<weapon> AvailableWeapons;

void WeaponsInit()
{
    weapon Dagger;
    Dagger.Attack = []()
    {
      std::cout << "OoOohHH sword attack so scary aaaaaaaa\n";
    };

    Dagger.PositionInTextures = 0;

   AvailableWeapons.push_back(Dagger);

   weapon_slots.push_back(Dagger);
   weapon_slots.push_back(Dagger);
   weapon_slots.push_back(Dagger);



}
