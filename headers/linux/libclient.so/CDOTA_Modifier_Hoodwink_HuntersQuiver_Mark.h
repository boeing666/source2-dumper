#pragma once

class CDOTA_Modifier_Hoodwink_HuntersQuiver_Mark : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 stack_crit_chance_pct; // offset 0x1A78, size 0x4, align 4
    int32 critical_damage_pct; // offset 0x1A7C, size 0x4, align 4
    int32 stack_slow_pct; // offset 0x1A80, size 0x4, align 4
    ParticleIndex_t m_nFXStackIndex; // offset 0x1A84, size 0x4, align 255
};
