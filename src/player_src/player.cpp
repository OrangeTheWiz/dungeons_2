#include "player.h"
#include "raylib.h"
#include "../chunking/chunks.h"


int RelativeX = 0;
int RelativeY = 0;
int PlayerSpeed = 5000;

void PlayerMovement()
{
 if (IsKeyDown(KEY_W)) { RelativeY -= PlayerSpeed * GetFrameTime(); }
 if (IsKeyDown(KEY_S)) { RelativeY += PlayerSpeed * GetFrameTime(); }
 if (IsKeyDown(KEY_A)) { RelativeX -= PlayerSpeed * GetFrameTime(); }
 if (IsKeyDown(KEY_D)) { RelativeX += PlayerSpeed * GetFrameTime(); }

 if (RelativeX >= 500) { RelativeX = 0; ChunkX += 1; }
 if (RelativeX <= -1) { RelativeX = 500; ChunkX -= 1; }
 if (RelativeY >= 500) { RelativeY = 0; ChunkY += 1; }
 if (RelativeY <= -1) { RelativeY = 500; ChunkY -= 1; }

 SnapToValidChunks();

}
