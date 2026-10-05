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
   WeaponSlotsRectangles.push_back({50, 0, 50.0, 50.0});
   WeaponSlotsRectangles.push_back({100, 0, 50.0, 50.0});

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

         DrawRectangle(WeaponSlotsRectangles[i].x, WeaponSlotsRectangles[i].y, WeaponSlotsRectangles[i].width, WeaponSlotsRectangles[i].height, RED);
         DrawTextureEx(Textures[weapon_slots[i].PositionInTextures], {WeaponSlotsRectangles[i].x, WeaponSlotsRectangles[i].y}, 0.0, 0.5, WHITE);
     }
     else
     {

       DrawRectangle(WeaponSlotsRectangles[i].x, WeaponSlotsRectangles[i].y, WeaponSlotsRectangles[i].width, WeaponSlotsRectangles[i].height, BLUE);
       DrawTextureEx(Textures[weapon_slots[i].PositionInTextures], {WeaponSlotsRectangles[i].x, WeaponSlotsRectangles[i].y}, 0.0, 0.5, WHITE);
     }

   }

   if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
   {
     weapon_slots[SelectedWeaponSlot].Attack();
   }


}
