#pragma once

class CDOTA_Modifier_Lich_Chain_Frost_Frostbound : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 jump_range; // offset 0x1AA8, size 0x4, align 4
    int32 jumps_remaining; // offset 0x1AAC, size 0x4, align 4
    int32 damage_to_heroes; // offset 0x1AB0, size 0x4, align 4
    int32 heroes_killed; // offset 0x1AB4, size 0x4, align 4
    bool m_bFoundTarget; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x3]; // offset 0x1AB9
    ParticleIndex_t m_nFXIndex; // offset 0x1ABC, size 0x4, align 255
    char _pad_1AC0[0x18]; // offset 0x1AC0
};
