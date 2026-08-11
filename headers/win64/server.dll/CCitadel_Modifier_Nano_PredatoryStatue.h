#pragma once

class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier /*0x0*/  // sizeof 0x5A0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xFC]; // offset 0x0
    GameTime_t m_GameTimeEnabled; // offset 0xFC, size 0x4, align 255
    GameTime_t m_LastCatInAreaTime; // offset 0x100, size 0x4, align 255
    bool m_bIsAttacking; // offset 0x104, size 0x1, align 1
    char _pad_0105[0x3]; // offset 0x105
    int32 m_iTargetID; // offset 0x108, size 0x4, align 4
    char _pad_010C[0x494]; // offset 0x10C
};
