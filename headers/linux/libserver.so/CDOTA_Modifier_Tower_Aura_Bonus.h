#pragma once

class CDOTA_Modifier_Tower_Aura_Bonus : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_armor; // offset 0x1A78, size 0x4, align 4
    float32 hp_regen; // offset 0x1A7C, size 0x4, align 4
    bool m_bOverrideArmor; // offset 0x1A80, size 0x1, align 1
    bool m_bOverrideRegen; // offset 0x1A81, size 0x1, align 1
    bool m_bSentFirstRefresh; // offset 0x1A82, size 0x1, align 1
    char _pad_1A83[0x5]; // offset 0x1A83
};
