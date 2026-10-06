#pragma once

class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier /*0x0*/  // sizeof 0x7F0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x198]; // offset 0x0
    GameTime_t m_GameTimeEnabled; // offset 0x198, size 0x4, align 255
    GameTime_t m_LastCatInAreaTime; // offset 0x19C, size 0x4, align 255
    bool m_bIsAttacking; // offset 0x1A0, size 0x1, align 1
    char _pad_01A1[0x3]; // offset 0x1A1
    int32 m_iTargetID; // offset 0x1A4, size 0x4, align 4
    char _pad_01A8[0x648]; // offset 0x1A8
};
