#pragma once

class CDOTA_Modifier_Necrolyte_Sadist : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 aura_radius; // offset 0x1A58, size 0x4, align 4
    float32 regen; // offset 0x1A5C, size 0x4, align 4
    bool m_bStackCountChanged; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x7]; // offset 0x1A61
    CUtlVector< GameTime_t > m_fStackExpireTimes; // offset 0x1A68, size 0x18, align 8
    float32 bonus_aoe; // offset 0x1A80, size 0x4, align 4
    float32 bonus_spell_amp; // offset 0x1A84, size 0x4, align 4
};
