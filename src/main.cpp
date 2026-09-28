
#include <iostream>
#include "raylib.h"
#include <string>
#include "chunking/chunks.h"
#include "player_src/player.h"










int main()
{
   MakeChunk("0 0", 0, 0);

   InitWindow(500, 500, "procedural generation");
   SetTargetFPS(60);

   while (!WindowShouldClose())
   {
       BeginDrawing();
       ClearBackground(GREEN);
       PlayerMovement();

       ChunkGenerationLoopFunction();


       EndDrawing();
   }

   CloseWindow();




  return 0;

}
