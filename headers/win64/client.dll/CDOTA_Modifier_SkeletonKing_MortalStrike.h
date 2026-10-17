#pragma once

class CDOTA_Modifier_SkeletonKing_MortalStrike : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 crit_mult; // offset 0x1AA8, size 0x4, align 4
    int32 wraith_crit_bonus; // offset 0x1AAC, size 0x4, align 4
    float32 wraith_cd_mult; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
