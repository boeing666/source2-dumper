#pragma once

class CDOTA_Ability_ChaosKnight_Reality_Rift : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 m_flPercentage; // offset 0x85C, size 0x4, align 4
    CUtlVector< ParticleIndex_t > m_FXIndex; // offset 0x860, size 0x18, align 8
    CHandle< CBaseEntity > m_hRiftIllusion; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
};
