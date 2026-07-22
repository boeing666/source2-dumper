#pragma once

class CDOTA_Ability_Sniper_Assassinate : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x870]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x870, size 0x4, align 4
    ParticleIndex_t m_iIndex; // offset 0x874, size 0x4, align 255
    float32 cooldown_reduction_on_kill; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
};
