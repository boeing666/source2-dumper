#pragma once

class sRevenantDef  // sizeof 0x10, align 0xFF [trivial_dtor] (client)
{
public:
    C_DOTA_BaseNPC* pRevenant; // offset 0x0, size 0x8, align 8
    ParticleIndex_t nRevenantFXIndex; // offset 0x8, size 0x4, align 255
    char _pad_000C[0x4]; // offset 0xC
};
