#pragma once
#include <functional>
#include <vector>


extern void WeaponsInit();

struct weapon
{


  // position in textures refers to the index
  // that x instance of the weapon struct has (so an index) in the textures vector
  int PositionInTextures;
  int someNum;
  std::function<void(weapon*)> Attack;
};


// available weapons is different than weapon slots. AvailableWeapons is for when the game
// spawns in items in a loot crate and the game needs somewhere to choose weapons from.
// AvailableWeapons is that somewhere.

extern std::vector<weapon> AvailableWeapons;
