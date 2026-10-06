#pragma once

class CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy : public CCitadelModifier /*0x0*/  // sizeof 0x580, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    bool m_bAddedStasisParticle; // offset 0x148, size 0x1, align 1
    char _pad_0149[0x3]; // offset 0x149
    Vector m_vHoldOffset; // offset 0x14C, size 0xC, align 4
    float32 m_flLastTouchTime; // offset 0x158, size 0x4, align 4
    char _pad_015C[0x424]; // offset 0x15C
};
