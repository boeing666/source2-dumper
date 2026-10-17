#pragma once

class CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    Vector m_vPathDir; // offset 0x1AA8, size 0xC, align 4
    float32 shard_trail_radius; // offset 0x1AB4, size 0x4, align 4
    float32 shard_debuff_linger_duration; // offset 0x1AB8, size 0x4, align 4
    float32 shard_interval; // offset 0x1ABC, size 0x4, align 4
};
