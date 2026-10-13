#pragma once

#include "./weapons.h"
#include "raylib.h"




class Dagger : public weapon
{


  public:

   Vector2 Position;
   void Attack() override;
   void Update() override;



};
extern void InitalizeDagger();
