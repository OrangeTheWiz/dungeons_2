#include "inventory.h"
#include "../assets/assets.h"
#include <vector>
#include "raylib.h"


int SelectedWeaponSlot = 0;

std::vector<weapon> weapon_slots;

std::vector<Rectangle> WeaponSlotsRectangles;

void InitWeaponSlotsRectangles()
{

   WeaponSlotsRectangles.push_back({0, 0, 50.0, 50.0});
   WeaponSlotsRectangles.push_back({100, 0, 50.0, 50.0});
   WeaponSlotsRectangles.push_back({200, 0, 50.0, 50.0});

}




void InventoryUpdateLoop()
{

   if (IsKeyPressed(KEY_ONE))
   {
       SelectedWeaponSlot = 0;
   }
   if (IsKeyPressed(KEY_TWO))
   {
       SelectedWeaponSlot = 1;
   }
   if (IsKeyPressed(KEY_THREE))
   {
       SelectedWeaponSlot = 2;
   }

   // 2 here because WeaponSlotRectangles has 3 elements vectors use zero based indexing
   for (int i = 0; i <= 2; i++)
   {
     if (SelectedWeaponSlot == i)
     {
         Rectangle LateRenderingTextureRectangle = {WeaponSlotsRectangles[i].x, WeaponSlotsRectangles[i].y, 50.0, 50.0};

         DrawRectangle(WeaponSlotsRectangles[i].x, WeaponSlotsRectangles[i].y, WeaponSlotsRectangles[i].width, WeaponSlotsRectangles[i].height, RED);
         DrawTexturePro(Textures[weapon_slots[i].PositionInTextures], {WeaponSlotsRectangles[i].x, WeaponSlotsRectangles[i].y, 100.0, 100.0}, LateRenderingTextureRectangle,  {0, 0}, 0.0, WHITE);
     }
     else
     {
       Rectangle LateRenderingTextureRectangle = {WeaponSlotsRectangles[i].x, WeaponSlotsRectangles[i].y, 50.0, 50.0};

       DrawRectangle(WeaponSlotsRectangles[i].x, WeaponSlotsRectangles[i].y, WeaponSlotsRectangles[i].width, WeaponSlotsRectangles[i].height, BLUE);
       DrawTexturePro(Textures[weapon_slots[i].PositionInTextures], {WeaponSlotsRectangles[i].x, WeaponSlotsRectangles[i].y, 100.0, 100.0}, LateRenderingTextureRectangle, {0, 0}, 0.0, WHITE);
     }

   }

   if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
   {
     weapon_slots[SelectedWeaponSlot].Attack();
   }


}
