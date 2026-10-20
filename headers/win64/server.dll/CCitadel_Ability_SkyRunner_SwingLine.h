#pragma once

class CCitadel_Ability_SkyRunner_SwingLine : public CCitadelBaseAbility /*0x0*/  // sizeof 0x16E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    ESwingState_t m_eSwingState; // offset 0x14A8, size 0x1, align 1
    char _pad_14A9[0x3]; // offset 0x14A9
    GameTime_t m_SwingStartTime; // offset 0x14AC, size 0x4, align 255
    GameTime_t m_SwingEndTime; // offset 0x14B0, size 0x4, align 255
    VectorWS m_vecSwingPoint; // offset 0x14B4, size 0xC, align 4
    VectorWS m_vecCurrentPosition; // offset 0x14C0, size 0xC, align 4
    float32 m_flIdealSpringLength; // offset 0x14CC, size 0x4, align 4
    char _pad_14D0[0x218]; // offset 0x14D0
};
