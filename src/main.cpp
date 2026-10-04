
#include "inventory/inventory.h"
#include "raylib.h"
#include "chunking/chunks.h"
#include "player_src/player.h"
#include "assets/assets.h"
#include "weaponry/weapons.h"







int main()
{
   InitTextures();
   WeaponsInit();
   InitWeaponSlotsRectangles();

   GenerateRoom();

   InitWindow(700, 700, "Dungeons 2");
   SetTargetFPS(60);

   while (!WindowShouldClose())
   {
       BeginDrawing();
       ClearBackground(GREEN);

       PlayerMovement();

       InventoryUpdateLoop();

       EndDrawing();
   }

   DeInitTextures();

   CloseWindow();



  return 0;

}
