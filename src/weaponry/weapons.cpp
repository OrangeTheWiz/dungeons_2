#include "weapons.h"
#include "../inventory/inventory.h"
#include <vector>
#include <iostream>
#include <cstdio>


std::vector<weapon> AvailableWeapons;

void WeaponsInit()
{
    weapon Dagger;

    Dagger.PositionInTextures = 0;


    Dagger.Attack = [](weapon *DaggerPointer)
    {

     std::cout << DaggerPointer->PositionInTextures << '\n';
     std::cout << "OoOohHH sword attack so scary aaaaaaaa\n";
    };



   weapon_slots.push_back(Dagger);
   weapon_slots.push_back(Dagger);
   weapon_slots.push_back(Dagger);



}
