#pragma once

class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier /*0x0*/  // sizeof 0x5C0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x118]; // offset 0x0
    GameTime_t m_GameTimeEnabled; // offset 0x118, size 0x4, align 255
    GameTime_t m_LastCatInAreaTime; // offset 0x11C, size 0x4, align 255
    bool m_bIsAttacking; // offset 0x120, size 0x1, align 1
    char _pad_0121[0x3]; // offset 0x121
    int32 m_iTargetID; // offset 0x124, size 0x4, align 4
    char _pad_0128[0x498]; // offset 0x128
};
