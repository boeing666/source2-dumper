#pragma once

class CDOTA_Modifier_Bloodseeker_BloodMist_Barrier : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    GameTime_t flLastGameTime; // offset 0x1AA8, size 0x4, align 255
    float32 m_flCurrentShield; // offset 0x1AAC, size 0x4, align 4
    float32 barrier_decay_pct; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
