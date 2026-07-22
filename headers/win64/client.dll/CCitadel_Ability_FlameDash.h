#pragma once

class CCitadel_Ability_FlameDash : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1500, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CCitadelAutoScaledTime m_flDashEndTime; // offset 0x11D8, size 0x18, align 255 | MNetworkEnable
    bool m_bIsSpeedBursting; // offset 0x11F0, size 0x1, align 1 | MNetworkEnable
    char _pad_11F1[0x30F]; // offset 0x11F1
};
