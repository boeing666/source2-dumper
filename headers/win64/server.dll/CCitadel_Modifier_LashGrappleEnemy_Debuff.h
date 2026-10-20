#pragma once

class CCitadel_Modifier_LashGrappleEnemy_Debuff : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x7A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x158]; // offset 0x0
    Vector m_vCrashDir; // offset 0x158, size 0xC, align 4
    VectorWS m_vLiftTarget; // offset 0x164, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x170, size 0x4, align 255
    bool m_bCrashingDown; // offset 0x174, size 0x1, align 1
    char _pad_0175[0x633]; // offset 0x175
};
