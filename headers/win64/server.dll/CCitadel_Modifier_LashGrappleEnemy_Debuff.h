#pragma once

class CCitadel_Modifier_LashGrappleEnemy_Debuff : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x798, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    Vector m_vCrashDir; // offset 0x148, size 0xC, align 4
    VectorWS m_vLiftTarget; // offset 0x154, size 0xC, align 4
    GameTime_t m_flStartTime; // offset 0x160, size 0x4, align 255
    bool m_bCrashingDown; // offset 0x164, size 0x1, align 1
    char _pad_0165[0x633]; // offset 0x165
};
