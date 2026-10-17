#pragma once

class CDOTA_Modifier_Snapfire_GobbleUp_BellyHasUnit : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hGobbledUnit; // offset 0x1AA8, size 0x4, align 4
    PlayerID_t m_nOriginalControllingUnit; // offset 0x1AAC, size 0x4, align 255
    bool m_bUnitWasLaunched; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    float32 max_time_in_belly; // offset 0x1AB4, size 0x4, align 4
};
