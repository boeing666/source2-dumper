#pragma once

class CDOTA_Modifier_Leshrac_Lightning_Storm : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage; // offset 0x1A78, size 0x4, align 4
    float32 radius; // offset 0x1A7C, size 0x4, align 4
    int32 jump_count; // offset 0x1A80, size 0x4, align 4
    float32 slow_duration; // offset 0x1A84, size 0x4, align 4
    float32 jump_delay; // offset 0x1A88, size 0x4, align 4
    CHandle< C_BaseEntity > hInitialTarget; // offset 0x1A8C, size 0x4, align 4
    float32 m_flDamage; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
