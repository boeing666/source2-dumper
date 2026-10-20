#pragma once

class CCitadel_Ability_SkyRunner_SwingLine : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1920, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    ESwingState_t m_eSwingState; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x3]; // offset 0x16E1
    GameTime_t m_SwingStartTime; // offset 0x16E4, size 0x4, align 255
    GameTime_t m_SwingEndTime; // offset 0x16E8, size 0x4, align 255
    VectorWS m_vecSwingPoint; // offset 0x16EC, size 0xC, align 4
    VectorWS m_vecCurrentPosition; // offset 0x16F8, size 0xC, align 4
    float32 m_flIdealSpringLength; // offset 0x1704, size 0x4, align 4
    char _pad_1708[0x218]; // offset 0x1708
};
