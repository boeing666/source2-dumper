#pragma once

class CDOTA_Modifier_Bloodseeker_BloodMist_Barrier : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    GameTime_t flLastGameTime; // offset 0x1A78, size 0x4, align 255
    float32 m_flCurrentShield; // offset 0x1A7C, size 0x4, align 4
    float32 barrier_decay_pct; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
