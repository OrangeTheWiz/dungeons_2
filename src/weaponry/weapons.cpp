#include "weapons.h"
#include "../inventory/inventory.h"
#include <vector>
#include <iostream>
#include "raymath.h"
#include "../assets/assets.h"
#include "raylib.h"
#include "../player_src/player.h"

std::vector<weapon> AvailableWeapons;

void WeaponsInit()
{
    weapon Dagger;

    Dagger.PositionInTextures = 0;

    Dagger.IsAttacking = false;

    // pointers because this function goes out of scope
    // and the Attack function needs to access Dagger member variable(s).
    Dagger.Attack = [](weapon *DaggerPointer)
    {

      DaggerPointer->Position.x = RelativeX;

      DaggerPointer->Position.y = RelativeY;

      DaggerPointer->IsAttacking = true;

    };

    Dagger.Update = [](weapon *DaggerPointer)
    {
         if (DaggerPointer->IsAttacking == true)
         {
              // Draw the dagger when attacking.
              DrawTextureEx(Textures[DaggerPointer->PositionInTextures], DaggerPointer->Position, 1.0, 0.5, WHITE);
              // Move the dagger towards the mouse cursor.
              DaggerPointer->Position = Vector2MoveTowards(DaggerPointer->Position, GetMousePosition(), 700 * GetFrameTime());
              
              // End condition for the Update function that also resets the Dagger's position.
              if (DaggerPointer->Position.x == GetMouseX() && DaggerPointer->Position.y == GetMouseY())
              {
                 DaggerPointer->IsAttacking = false;
                 DaggerPointer->Position.x = 0;
                 DaggerPointer->Position.y = 0;
              }
         }

    };

   AvailableWeapons.push_back(Dagger);

   weapon_slots.push_back(Dagger);
   weapon_slots.push_back(Dagger);
   weapon_slots.push_back(Dagger);



}
