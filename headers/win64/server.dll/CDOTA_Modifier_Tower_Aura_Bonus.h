#pragma once

class CDOTA_Modifier_Tower_Aura_Bonus : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_armor; // offset 0x1AA8, size 0x4, align 4
    float32 hp_regen; // offset 0x1AAC, size 0x4, align 4
    bool m_bOverrideArmor; // offset 0x1AB0, size 0x1, align 1
    bool m_bOverrideRegen; // offset 0x1AB1, size 0x1, align 1
    bool m_bSentFirstRefresh; // offset 0x1AB2, size 0x1, align 1
    char _pad_1AB3[0x5]; // offset 0x1AB3
};
