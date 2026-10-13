#include "../player_src/player.h"
#include "dagger.h"
#include "raylib.h"
#include "raymath.h"
#include "./weapons.h"
#include "../inventory/inventory.h"
#include "../assets/assets.h"
#include <iostream>
#include <memory> // dont ask

void Dagger::Attack()
{
      Position.x = RelativeX;

      Position.y = RelativeY;

      IsAttacking = true;
      for (int i = 0; i < 100; i++)
      {
         std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
      }
}


void Dagger::Update()
{

         if (IsAttacking == true)
         {
              // Draw the dagger when attacking.
              DrawTextureEx(Textures[PositionInTextures], Position, 1.0, 0.5, WHITE);
              // Move the dagger towards the mouse cursor.
              Position = Vector2MoveTowards(Position, GetMousePosition(), 700 * GetFrameTime());
              
              // End condition for the Update function that also resets the Dagger's position.
              if (Position.x == GetMouseX() && Position.y == GetMouseY())
              {
                 IsAttacking = false;
                 Position.x = 0;
                 Position.y = 0;
              }
         }

}

void something()
{
 std::cout << "something\n";
}

void InitalizeDagger()
{

 Dagger dagger;


 dagger.PositionInTextures = 0;
 dagger.IsAttacking = false; 

 dagger.Position = {0.0, 0.0};
 AvailableWeapons.push_back(dagger);

 weapon_slots.push_back(dagger);
 weapon_slots.push_back(dagger);
 weapon_slots.push_back(dagger);

}
