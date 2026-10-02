
#include <iostream>
#include "raylib.h"
#include <string>
#include "chunking/chunks.h"
#include "player_src/player.h"










int main()
{
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

   CloseWindow();




  return 0;

}
