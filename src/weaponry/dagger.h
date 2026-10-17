#pragma once

#include "./weapons.h"
#include "raylib.h"




class Dagger : public weapon
{


  public:

   Vector2 Position;
   Rectangle Rect;
   void Attack() override;
   void Update() override;



};
