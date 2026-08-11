#pragma once

class CDOTA_Modifier_NightStalker_Darkness : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_damage; // offset 0x1A78, size 0x4, align 4
    int32 status_resistance; // offset 0x1A7C, size 0x4, align 4
    int32 hp_regen; // offset 0x1A80, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A84, size 0x4, align 255
    bool m_bIsDay; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x7]; // offset 0x1A89
};
