#pragma once

class CDOTA_Modifier_Necrolyte_Sadist : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 aura_radius; // offset 0x1AF8, size 0x4, align 4
    float32 regen; // offset 0x1AFC, size 0x4, align 4
    bool m_bStackCountChanged; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x7]; // offset 0x1B01
    CUtlVector< GameTime_t > m_fStackExpireTimes; // offset 0x1B08, size 0x18, align 8
    float32 bonus_aoe; // offset 0x1B20, size 0x4, align 4
    float32 bonus_spell_amp; // offset 0x1B24, size 0x4, align 4
};
