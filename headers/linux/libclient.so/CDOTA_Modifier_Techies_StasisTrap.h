#pragma once

class CDOTA_Modifier_Techies_StasisTrap : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A64]; // offset 0x0
    float32 activation_radius; // offset 0x1A64, size 0x4, align 4
    float32 stun_radius; // offset 0x1A68, size 0x4, align 4
    float32 stun_duration; // offset 0x1A6C, size 0x4, align 4
    float32 explode_delay; // offset 0x1A70, size 0x4, align 4
    float32 activation_time; // offset 0x1A74, size 0x4, align 4
    bool m_bActivated; // offset 0x1A78, size 0x1, align 1
    bool m_bTriggered; // offset 0x1A79, size 0x1, align 1
    char _pad_1A7A[0x6]; // offset 0x1A7A
};
