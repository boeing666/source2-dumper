#pragma once

class CCitadel_Modifier_PunkgoatPull : public CCitadelModifier /*0x0*/  // sizeof 0x420, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    float32 m_flDamageToDealAtEnd; // offset 0x140, size 0x4, align 4
    float32 m_flDamageLeftToDealOverPull; // offset 0x144, size 0x4, align 4
    float32 m_flDamageOverPullAccumulator; // offset 0x148, size 0x4, align 4
    VectorWS m_vPullToLocation; // offset 0x14C, size 0xC, align 4
    bool m_bAllowTrackTarget; // offset 0x158, size 0x1, align 1
    char _pad_0159[0x3]; // offset 0x159
    float32 m_flCurrentVerticalSpeed; // offset 0x15C, size 0x4, align 4
    char _pad_0160[0x2C0]; // offset 0x160
};
