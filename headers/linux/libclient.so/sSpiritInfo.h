#pragma once

class sSpiritInfo  // sizeof 0x2C, align 0xFF (client)
{
public:
    char _pad_0000[0x4]; // offset 0x0
    VectorWS vTargetLoc; // offset 0x4, size 0xC, align 4
    CHandle< C_BaseEntity > hTarget; // offset 0x10, size 0x4, align 4
    bool bHit; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    int32 iHealAmount; // offset 0x18, size 0x4, align 4
    int32 iMinDamage; // offset 0x1C, size 0x4, align 4
    int32 iMaxDamage; // offset 0x20, size 0x4, align 4
    ParticleIndex_t nFXAmbientIndex; // offset 0x24, size 0x4, align 255
    CHandle< C_BaseEntity > hDeadHero; // offset 0x28, size 0x4, align 4
};
