#pragma once

class CDOTA_Modifier_Snapfire_GobbleUp_BellyHasUnit : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hGobbledUnit; // offset 0x1A78, size 0x4, align 4
    PlayerID_t m_nOriginalControllingUnit; // offset 0x1A7C, size 0x4, align 255
    bool m_bUnitWasLaunched; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    float32 max_time_in_belly; // offset 0x1A84, size 0x4, align 4
};
