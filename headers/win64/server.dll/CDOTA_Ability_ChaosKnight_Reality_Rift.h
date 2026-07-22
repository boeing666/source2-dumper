#pragma once

class CDOTA_Ability_ChaosKnight_Reality_Rift : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 m_flPercentage; // offset 0x580, size 0x4, align 4
    char _pad_0584[0x4]; // offset 0x584
    CUtlVector< ParticleIndex_t > m_FXIndex; // offset 0x588, size 0x18, align 8
    CHandle< CBaseEntity > m_hRiftIllusion; // offset 0x5A0, size 0x4, align 4
    char _pad_05A4[0x4]; // offset 0x5A4
};
