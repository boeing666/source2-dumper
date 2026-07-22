#pragma once

class CDOTA_Ability_VoidSpirit_ResonantPulse : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    bool m_bGrantedScepterCharges; // offset 0x824, size 0x1, align 1
    char _pad_0825[0x3]; // offset 0x825
    float32 buff_duration; // offset 0x828, size 0x4, align 4
    float32 base_absorb_amount; // offset 0x82C, size 0x4, align 4
    float32 absorb_per_hero_hit; // offset 0x830, size 0x4, align 4
    char _pad_0834[0x4]; // offset 0x834
};
