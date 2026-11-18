#pragma once

class C_DOTA_Ability_Shredder_TimberChain : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    int32 chain_radius; // offset 0x828, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x82C, size 0x4, align 255
    Vector m_vProjectileVelocity; // offset 0x830, size 0xC, align 4
    VectorWS m_vCasterStartingLocation; // offset 0x83C, size 0xC, align 4
    bool m_bRetract; // offset 0x848, size 0x1, align 1
    char _pad_0849[0x7]; // offset 0x849
};
