#pragma once

class CDOTA_Ability_Grimstroke_SpiritWalk : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 buff_duration; // offset 0x824, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x828, size 0x4, align 4
    int32 can_end_early; // offset 0x82C, size 0x4, align 4
};
