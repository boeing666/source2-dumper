#pragma once

class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier /*0x0*/  // sizeof 0x7E0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x188]; // offset 0x0
    GameTime_t m_GameTimeEnabled; // offset 0x188, size 0x4, align 255
    GameTime_t m_LastCatInAreaTime; // offset 0x18C, size 0x4, align 255
    bool m_bIsAttacking; // offset 0x190, size 0x1, align 1
    char _pad_0191[0x3]; // offset 0x191
    int32 m_iTargetID; // offset 0x194, size 0x4, align 4
    char _pad_0198[0x648]; // offset 0x198
};
