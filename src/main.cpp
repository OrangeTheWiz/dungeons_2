
#include "inventory/inventory.h"
#include "raylib.h"
#include "chunking/chunks.h"
#include "player_src/player.h"
#include "assets/assets.h"
#include "weaponry/weapons.h"


#if defined(PLATFORM_WEB)
    #include <emscripten/emscripten.h>
#endif

void UpdateDrawFrame(void);




int main()
{

   InitWindow(700, 700, "Dungeons 2");

  #if defined(PLATFORM_WEB)
     emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
  #else

   
    SetTargetFPS(60);

    WeaponsInit();
   
    InitWeaponSlotsRectangles();

    GenerateRoom();

    InitTextures();

    while (!WindowShouldClose())
    {
      UpdateDrawFrame();
    }

  #endif
   DeInitTextures();

   CloseWindow();



  return 0;

}


void UpdateDrawFrame(void)
{

       BeginDrawing();
       
       ClearBackground(GREEN);

       PlayerMovement();

       InventoryUpdateLoop();


       EndDrawing();

}
