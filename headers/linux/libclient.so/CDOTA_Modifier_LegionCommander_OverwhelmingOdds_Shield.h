#pragma once

class CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nDamageAbsorbed; // offset 0x1A78, size 0x4, align 4
    bool m_bStartedTimer; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    GameTime_t m_timeLastDamage; // offset 0x1A80, size 0x4, align 255
    int32 bonus_hp_regen; // offset 0x1A84, size 0x4, align 4
    int32 shield; // offset 0x1A88, size 0x4, align 4
    int32 total_shield; // offset 0x1A8C, size 0x4, align 4
    float32 restore_time; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
