#pragma once

class CDOTA_Modifier_Leshrac_Lightning_Storm : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 damage; // offset 0x1AA8, size 0x4, align 4
    float32 radius; // offset 0x1AAC, size 0x4, align 4
    int32 jump_count; // offset 0x1AB0, size 0x4, align 4
    float32 slow_duration; // offset 0x1AB4, size 0x4, align 4
    float32 jump_delay; // offset 0x1AB8, size 0x4, align 4
    CHandle< C_BaseEntity > hInitialTarget; // offset 0x1ABC, size 0x4, align 4
    float32 m_flDamage; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
