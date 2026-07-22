#pragma once

struct NeutralSpawnBoxes_t  // sizeof 0x38, align 0xFF (client)
{
    AABB_t neutralSpawnBoxes; // offset 0x0, size 0x18, align 255
    VectorWS vSpawnBoxOrigin; // offset 0x18, size 0xC, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlString strCampName; // offset 0x28, size 0x8, align 8
    CEntityIndex iSpawnerEntIndex; // offset 0x30, size 0x4, align 4
    int32 nCampType; // offset 0x34, size 0x4, align 4
};
