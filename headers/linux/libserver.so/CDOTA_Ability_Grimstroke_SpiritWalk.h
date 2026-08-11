#pragma once

class CDOTA_Ability_Grimstroke_SpiritWalk : public CDOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 buff_duration; // offset 0x85C, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x860, size 0x4, align 4
    int32 can_end_early; // offset 0x864, size 0x4, align 4
};
