#pragma once

class CDOTA_Modifier_Techies_StasisTrap : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A84]; // offset 0x0
    float32 activation_radius; // offset 0x1A84, size 0x4, align 4
    float32 stun_radius; // offset 0x1A88, size 0x4, align 4
    float32 stun_duration; // offset 0x1A8C, size 0x4, align 4
    float32 explode_delay; // offset 0x1A90, size 0x4, align 4
    float32 activation_time; // offset 0x1A94, size 0x4, align 4
    bool m_bActivated; // offset 0x1A98, size 0x1, align 1
    bool m_bTriggered; // offset 0x1A99, size 0x1, align 1
    char _pad_1A9A[0x6]; // offset 0x1A9A
};
