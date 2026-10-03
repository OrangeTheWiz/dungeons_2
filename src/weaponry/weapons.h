#pragma once
#include <functional>




struct weapon
{


  // position in textures refers to the index
  // that x instance of the weapon struct has (so an index) in the textures vector 
  int PositionInTextures;

  std::function<void()> Attack;
};
