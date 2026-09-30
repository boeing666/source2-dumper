#pragma once

class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier /*0x0*/  // sizeof 0x7C0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x16C]; // offset 0x0
    GameTime_t m_GameTimeEnabled; // offset 0x16C, size 0x4, align 255
    GameTime_t m_LastCatInAreaTime; // offset 0x170, size 0x4, align 255
    bool m_bIsAttacking; // offset 0x174, size 0x1, align 1
    char _pad_0175[0x3]; // offset 0x175
    int32 m_iTargetID; // offset 0x178, size 0x4, align 4
    char _pad_017C[0x644]; // offset 0x17C
};
