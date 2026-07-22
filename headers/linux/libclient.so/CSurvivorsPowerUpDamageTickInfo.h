#pragma once

class CSurvivorsPowerUpDamageTickInfo  // sizeof 0x40, align 0xFF (client)
{
public:
    VectorWS vOrigin; // offset 0x0, size 0xC, align 4
    Vector vFacing; // offset 0xC, size 0xC, align 4
    float32 flTimeLeft; // offset 0x18, size 0x4, align 4
    float32 flMagicalDamage; // offset 0x1C, size 0x4, align 4
    float32 flPhysicalDamage; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlVector< Vector > vDirections; // offset 0x28, size 0x18, align 8
};
