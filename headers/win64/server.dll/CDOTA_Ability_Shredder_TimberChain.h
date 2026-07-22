#pragma once

class CDOTA_Ability_Shredder_TimberChain : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 chain_radius; // offset 0x580, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x584, size 0x4, align 255
    Vector m_vProjectileVelocity; // offset 0x588, size 0xC, align 4
    VectorWS m_vCasterStartingLocation; // offset 0x594, size 0xC, align 4
    bool m_bRetract; // offset 0x5A0, size 0x1, align 1
    char _pad_05A1[0x7]; // offset 0x5A1
};
