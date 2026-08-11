#pragma once

class CCitadel_Ability_SkyRunner_SwingLine : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1120, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    ESwingState_t m_eSwingState; // offset 0xF70, size 0x1, align 1 | MNetworkEnable
    char _pad_0F71[0x3]; // offset 0xF71
    GameTime_t m_SwingStartTime; // offset 0xF74, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_SwingEndTime; // offset 0xF78, size 0x4, align 255 | MNetworkEnable
    Vector m_vecSwingPoint; // offset 0xF7C, size 0xC, align 4 | MNetworkEnable
    Vector m_vecCurrentPosition; // offset 0xF88, size 0xC, align 4
    float32 m_flIdealSpringLength; // offset 0xF94, size 0x4, align 4 | MNetworkEnable
    char _pad_0F98[0x188]; // offset 0xF98
};
