#pragma once

class CCitadel_Ability_Wrecker_Ultimate : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1490, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11F8]; // offset 0x0
    QAngle m_angBeamAngles; // offset 0x11F8, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback
    char _pad_1204[0x84]; // offset 0x1204
    bool m_bNeedsBeamReset; // offset 0x1288, size 0x1, align 1
    char _pad_1289[0x207]; // offset 0x1289
};
