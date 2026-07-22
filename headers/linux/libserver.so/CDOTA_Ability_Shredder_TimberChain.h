#pragma once

class CDOTA_Ability_Shredder_TimberChain : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 chain_radius; // offset 0x85C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x860, size 0x4, align 255
    Vector m_vProjectileVelocity; // offset 0x864, size 0xC, align 4
    VectorWS m_vCasterStartingLocation; // offset 0x870, size 0xC, align 4
    bool m_bRetract; // offset 0x87C, size 0x1, align 1
    char _pad_087D[0x3]; // offset 0x87D
};
