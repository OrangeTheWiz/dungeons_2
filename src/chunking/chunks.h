#include <unordered_map>
#include <iostream>
#include "raylib.h"
struct Chunk
{
    int x;
    int y;
    int number;
};


extern int ChunkX;

extern int ChunkY;

extern int OldChunkX;

extern int OldChunkY;

extern std::unordered_map<std::string, Chunk> Chunks;


extern std::string ChunkCoordinatesToString(int X, int Y);


extern void MakeChunk(std::string PositionString, int x, int y);

extern void GenerateRoom();

extern void ChunkInfoDisplay();

extern void SnapToValidChunks();

extern std::string LOCATION;
