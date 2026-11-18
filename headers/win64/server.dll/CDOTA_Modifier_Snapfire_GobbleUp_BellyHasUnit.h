#pragma once

class CDOTA_Modifier_Snapfire_GobbleUp_BellyHasUnit : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hGobbledUnit; // offset 0x1AF8, size 0x4, align 4
    PlayerID_t m_nOriginalControllingUnit; // offset 0x1AFC, size 0x4, align 255
    bool m_bUnitWasLaunched; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    float32 max_time_in_belly; // offset 0x1B04, size 0x4, align 4
};
