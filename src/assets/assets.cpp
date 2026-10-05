#include "assets.h"
#include "raylib.h"
#include <vector>

std::vector<Texture2D> Textures;





// add textures to the Textures vector
void InitTextures()
{

  // initalize textures
  Textures.push_back(LoadTexture("assets/dagger.png"));




}







// unloads textures from Textures vector
void DeInitTextures()
{

  // temporary solution for removing textures from Textures vector
  // TODO replace this with a for loop


  Textures.erase(Textures.begin() + 0);



}
