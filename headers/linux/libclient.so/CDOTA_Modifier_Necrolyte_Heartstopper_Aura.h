#pragma once

class CDOTA_Modifier_Necrolyte_Heartstopper_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 aura_radius; // offset 0x1AA8, size 0x4, align 4
    bool m_bStackCountChanged; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    CUtlVector< GameTime_t > m_fStackExpireTimes; // offset 0x1AB0, size 0x18, align 8
};
