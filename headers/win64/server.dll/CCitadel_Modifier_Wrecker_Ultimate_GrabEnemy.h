#pragma once

class CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy : public CCitadelModifier /*0x0*/  // sizeof 0x3E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bAddedStasisParticle; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    Vector m_vHoldOffset; // offset 0xD4, size 0xC, align 4
    float32 m_flLastTouchTime; // offset 0xE0, size 0x4, align 4
    char _pad_00E4[0x304]; // offset 0xE4
};
