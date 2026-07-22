#pragma once

class CDOTA_Ability_Morphling_Waveform : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    int32 m_nProjectileID; // offset 0x86C, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x870, size 0xC, align 4
    CHandle< CBaseEntity > m_hHitHero; // offset 0x87C, size 0x4, align 4
    bool m_bGrantedGem; // offset 0x880, size 0x1, align 1
    char _pad_0881[0x7]; // offset 0x881
};
