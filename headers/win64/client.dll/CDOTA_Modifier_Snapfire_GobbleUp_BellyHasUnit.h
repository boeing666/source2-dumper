#pragma once

class CDOTA_Modifier_Snapfire_GobbleUp_BellyHasUnit : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hGobbledUnit; // offset 0x1A58, size 0x4, align 4
    PlayerID_t m_nOriginalControllingUnit; // offset 0x1A5C, size 0x4, align 255
    bool m_bUnitWasLaunched; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x3]; // offset 0x1A61
    float32 max_time_in_belly; // offset 0x1A64, size 0x4, align 4
};
