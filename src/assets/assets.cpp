#include "assets.h"
#include "raylib.h"
#include <vector>

std::vector<Texture2D> Textures;





// add textures to the Textures vector
void InitTextures()
{

  // initalize textures
  Texture2D Dagger = LoadTexture("./dagger.png");
  

  // add them into the Textures vector for external use 
  Textures.push_back(Dagger);




  // deinizalize textures within InitTextures's scope.
  UnloadTexture(Dagger);
}







// unloads textures from Textures vector
void DeInitTextures()
{

  // temporary solution for removing textures from Textures vector
  // TODO replace this with a for loop


  Textures.erase(Textures.begin() + 0);



}
