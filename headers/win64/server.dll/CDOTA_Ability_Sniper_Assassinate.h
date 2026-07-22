#pragma once

class CDOTA_Ability_Sniper_Assassinate : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x594]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x594, size 0x4, align 4
    ParticleIndex_t m_iIndex; // offset 0x598, size 0x4, align 255
    float32 cooldown_reduction_on_kill; // offset 0x59C, size 0x4, align 4
};
