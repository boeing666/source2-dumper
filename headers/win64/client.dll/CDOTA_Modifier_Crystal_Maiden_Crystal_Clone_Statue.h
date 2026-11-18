#pragma once

class CDOTA_Modifier_Crystal_Maiden_Crystal_Clone_Statue : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 frostbite_radius; // offset 0x1AF8, size 0x4, align 4
    float32 anim_delay; // offset 0x1AFC, size 0x4, align 4
    bool m_bActivated; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    int32 clone_health; // offset 0x1B04, size 0x4, align 4
    float32 m_flDamageTaken; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
