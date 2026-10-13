#pragma once
#include <functional>
#include <vector>
#include "raylib.h"

extern void WeaponsInit();

class weapon
{

  public:
   // position in textures refers to the index
   // that x instance of the weapon class has (so an index) in the textures vector
   int PositionInTextures;
   bool IsAttacking;

   virtual void Attack() {}
   virtual void Update() {}

};


// available weapons is different than weapon slots. AvailableWeapons is for when the game
// spawns in items in a loot crate and the game needs somewhere to choose weapons from.
// AvailableWeapons is that somewhere.

extern std::vector<weapon> AvailableWeapons;


