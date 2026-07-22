#pragma once

class CCitadel_Modifier_LashGrappleEnemy_Debuff : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x568, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC8]; // offset 0x0
    Vector m_vCrashDir; // offset 0xC8, size 0xC, align 4
    Vector m_vLiftTarget; // offset 0xD4, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0xE0, size 0x4, align 255
    bool m_bCrashingDown; // offset 0xE4, size 0x1, align 1
    char _pad_00E5[0x483]; // offset 0xE5
};
