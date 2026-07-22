#pragma once

class CCitadel_Ability_SkyRunner_SwingLine : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1388, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    ESwingState_t m_eSwingState; // offset 0x11D8, size 0x1, align 1 | MNetworkEnable
    char _pad_11D9[0x3]; // offset 0x11D9
    GameTime_t m_SwingStartTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_SwingEndTime; // offset 0x11E0, size 0x4, align 255 | MNetworkEnable
    Vector m_vecSwingPoint; // offset 0x11E4, size 0xC, align 4 | MNetworkEnable
    Vector m_vecCurrentPosition; // offset 0x11F0, size 0xC, align 4
    float32 m_flIdealSpringLength; // offset 0x11FC, size 0x4, align 4 | MNetworkEnable
    char _pad_1200[0x188]; // offset 0x1200
};
