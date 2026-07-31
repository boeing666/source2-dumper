#pragma once

class CDOTA_Modifier_ArcWarden_MagneticField_Evasion : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 evasion_chance; // offset 0x1A78, size 0x4, align 4
    float32 radius; // offset 0x1A7C, size 0x4, align 4
    int32 shard_magic_resist; // offset 0x1A80, size 0x4, align 4
    int32 shard_slow_pct; // offset 0x1A84, size 0x4, align 4
    float32 aura_origin_x; // offset 0x1A88, size 0x4, align 4
    float32 aura_origin_y; // offset 0x1A8C, size 0x4, align 4
};
