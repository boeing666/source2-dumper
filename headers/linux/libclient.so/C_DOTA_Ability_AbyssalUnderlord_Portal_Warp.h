#pragma once

class C_DOTA_Ability_AbyssalUnderlord_Portal_Warp : public C_DOTABaseAbility /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x824, size 0x4, align 4
    float32 m_flChannelTime; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x4]; // offset 0x82C
};
