#pragma once

class sSpiritDef  // sizeof 0x10, align 0xFF [trivial_dtor] (client)
{
public:
    C_DOTA_BaseNPC* pSpirit; // offset 0x0, size 0x8, align 8
    ParticleIndex_t nSpiritFXIndex; // offset 0x8, size 0x4, align 255
    int32 nSpiritState; // offset 0xC, size 0x4, align 4
};
