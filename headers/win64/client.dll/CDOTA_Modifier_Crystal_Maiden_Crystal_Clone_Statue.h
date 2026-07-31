#pragma once

class CDOTA_Modifier_Crystal_Maiden_Crystal_Clone_Statue : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 frostbite_radius; // offset 0x1A78, size 0x4, align 4
    float32 anim_delay; // offset 0x1A7C, size 0x4, align 4
    bool m_bActivated; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    int32 clone_health; // offset 0x1A84, size 0x4, align 4
    float32 m_flDamageTaken; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
