#pragma once

class CCitadel_Modifier_LashGrappleEnemy_Debuff : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x578, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    Vector m_vCrashDir; // offset 0xD8, size 0xC, align 4
    Vector m_vLiftTarget; // offset 0xE4, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0xF0, size 0x4, align 255
    bool m_bCrashingDown; // offset 0xF4, size 0x1, align 1
    char _pad_00F5[0x483]; // offset 0xF5
};
