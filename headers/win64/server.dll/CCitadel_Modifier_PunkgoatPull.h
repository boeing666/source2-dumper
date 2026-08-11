#pragma once

class CCitadel_Modifier_PunkgoatPull : public CCitadelModifier /*0x0*/  // sizeof 0x2F0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    float32 m_flDamageToDealAtEnd; // offset 0xD0, size 0x4, align 4
    float32 m_flDamageLeftToDealOverPull; // offset 0xD4, size 0x4, align 4
    float32 m_flDamageOverPullAccumulator; // offset 0xD8, size 0x4, align 4
    Vector m_vPullToLocation; // offset 0xDC, size 0xC, align 4
    bool m_bAllowTrackTarget; // offset 0xE8, size 0x1, align 1
    char _pad_00E9[0x3]; // offset 0xE9
    float32 m_flCurrentVerticalSpeed; // offset 0xEC, size 0x4, align 4
    char _pad_00F0[0x200]; // offset 0xF0
};
