#pragma once

class CDOTA_Modifier_Lich_Chain_Frost_Frostbound : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 jump_range; // offset 0x1A78, size 0x4, align 4
    int32 jumps_remaining; // offset 0x1A7C, size 0x4, align 4
    int32 damage_to_heroes; // offset 0x1A80, size 0x4, align 4
    int32 heroes_killed; // offset 0x1A84, size 0x4, align 4
    bool m_bFoundTarget; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    ParticleIndex_t m_nFXIndex; // offset 0x1A8C, size 0x4, align 255
    char _pad_1A90[0x18]; // offset 0x1A90
};
