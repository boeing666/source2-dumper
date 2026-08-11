#pragma once

class CDOTA_Modifier_Lion_ManaDrain : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 mana_per_second; // offset 0x1A78, size 0x4, align 4
    int32 break_distance; // offset 0x1A7C, size 0x4, align 4
    float32 tick_interval; // offset 0x1A80, size 0x4, align 4
    int32 movespeed; // offset 0x1A84, size 0x4, align 4
    int32 damage_pct; // offset 0x1A88, size 0x4, align 4
    int32 ally_pct; // offset 0x1A8C, size 0x4, align 4
    int32 movespeed_bonus_when_empty_pct; // offset 0x1A90, size 0x4, align 4
    GameTime_t m_fAppliedTime; // offset 0x1A94, size 0x4, align 255
    int32 m_nTotalManaDrained; // offset 0x1A98, size 0x4, align 4
    int32 m_nSelfBuffSerialNumber; // offset 0x1A9C, size 0x4, align 4
    int32 m_nTargetDebuffSerialNumber; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x14]; // offset 0x1AA4
};
