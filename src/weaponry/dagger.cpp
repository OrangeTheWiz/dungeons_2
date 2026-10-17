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




void InitalizeDagger()
{

 Dagger dagger;

 dagger.Rect = {0.0, 0.0, 50, 50};
 dagger.PositionInTextures = 0;
 dagger.IsAttacking = false;

 dagger.Position = {0.0, 0.0};
 
 AvailableWeapons.push_back(std::move(std::make_unique<Dagger>(dagger)));

 // this is bc this is the first init function called and it needs to fill the weapon slots
 weapon_slots.push_back(std::move(std::make_unique<Dagger>(dagger)));
 weapon_slots.push_back(std::move(std::make_unique<Dagger>(dagger)));
 weapon_slots.push_back(std::move(std::make_unique<Dagger>(dagger)));

}
