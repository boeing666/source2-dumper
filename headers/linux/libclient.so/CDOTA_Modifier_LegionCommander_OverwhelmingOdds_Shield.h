#pragma once

class CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_nDamageAbsorbed; // offset 0x1AA8, size 0x4, align 4
    bool m_bStartedTimer; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    GameTime_t m_timeLastDamage; // offset 0x1AB0, size 0x4, align 255
    int32 bonus_hp_regen; // offset 0x1AB4, size 0x4, align 4
    int32 shield; // offset 0x1AB8, size 0x4, align 4
    int32 total_shield; // offset 0x1ABC, size 0x4, align 4
    float32 restore_time; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
