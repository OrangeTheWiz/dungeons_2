#pragma once
#include <vector>
#include "../weaponry/weapons.h"
#include "raylib.h"
#include <memory>

extern int SelectedWeaponSlot;

extern void InitWeaponSlotsRectangles();

extern void InventoryUpdateLoop();

// MAXIMUM 2
extern std::vector<std::unique_ptr<weapon>> weapon_slots;


// MAXIMUM 2
extern std::vector<Rectangle> WeaponSlotsRectangles;
