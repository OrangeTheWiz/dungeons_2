#include "chunks.h"
#include <iostream>
#include <unordered_map>
#include "../player_src/player.h"

int ChunkX = 0;
int ChunkY = 0;
int OldChunkX = 0;
int OldChunkY = 0;

std::string LOCATION;

std::unordered_map<std::string, Chunk> Chunks;

std::string ChunkCoordinatesToString(int X, int Y)
{


    std::string ChunkPosition;

    ChunkPosition = ChunkPosition + std::to_string(X) + " " + std::to_string(Y);
    return ChunkPosition;

}


void MakeChunk(std::string PositionString, int x, int y)
{
     Chunk ChunkInstance;
     ChunkInstance.number = GetRandomValue(0, 500);
     ChunkInstance.x = x;
     ChunkInstance.y = y;

     Chunks[PositionString] = ChunkInstance;
     std::cout << "MADE CHUNK\n";

}


void SnapToValidChunks()
{

    LOCATION = ChunkCoordinatesToString(ChunkX, ChunkY);

    if (Chunks.count(LOCATION) > 0)
    {
        OldChunkX = ChunkX;
        OldChunkY = ChunkY;
    }
    else
    {
      ChunkX = OldChunkX;
      ChunkY = OldChunkY;
    }


}


void ChunkGenerationLoopFunction()
{
    LOCATION = ChunkCoordinatesToString(ChunkX, ChunkY);

    std::cout << Chunks[LOCATION].number << '\n';
    std::string num_value = std::to_string(Chunks[LOCATION].number);
    const char* num_value_two = num_value.c_str();
    DrawRectangle(RelativeX, RelativeY, 25, 25, RED);
    DrawText(num_value_two, 250, 250, 25, RED);
    DrawText(std::to_string(ChunkX).c_str(), 0, 0, 25, RED);
}
