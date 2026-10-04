
#include "raylib.h"
#include "chunking/chunks.h"
#include "player_src/player.h"
#include "assets/assets.h"
#include "weaponry/weapons.h"








int main()
{
   InitTextures();
   WeaponsInit();
   GenerateRoom();

   InitWindow(700, 700, "procedural generation");
   SetTargetFPS(60);

   while (!WindowShouldClose())
   {
       BeginDrawing();
       ClearBackground(GREEN);
       PlayerMovement();

       ChunkInfoDisplay();

       EndDrawing();
   }

   DeInitTextures();

   CloseWindow();



  return 0;

}
