#include "chunks.h"
#include <iostream>
#include <unordered_map>
#include "../player_src/player.h"

int ChunkX = 0;
int ChunkY = 0;


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

     Chunks.erase("0 0");
     std::cout << "Removed last chunk.\n";
     Chunks[PositionString] = ChunkInstance;
     std::cout << "MADE CHUNK\n";

}


void ChunkGenerationLoopFunction()
{
    LOCATION = "0 0";
    std::cout << Chunks[LOCATION].number << '\n';
    std::string num_value = std::to_string(Chunks[LOCATION].number);
    const char* num_value_two = num_value.c_str();
    DrawRectangle(RelativeX, RelativeY, 25, 25, RED);
    DrawText(num_value_two, 250, 250, 25, RED);
    DrawText(std::to_string(ChunkX).c_str(), 0, 0, 25, RED);
}
