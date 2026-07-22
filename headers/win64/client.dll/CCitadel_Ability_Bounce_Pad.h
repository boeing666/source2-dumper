#pragma once

class CCitadel_Ability_Bounce_Pad : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1478, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    Vector m_vForward; // offset 0x11D8, size 0xC, align 4
    bool m_bShouldDeploy; // offset 0x11E4, size 0x1, align 1
    bool m_bAnglesSet; // offset 0x11E5, size 0x1, align 1
    bool m_bCanCancel; // offset 0x11E6, size 0x1, align 1
    char _pad_11E7[0x281]; // offset 0x11E7
    QAngle m_angFacing; // offset 0x1468, size 0xC, align 4 | MNetworkEnable
    char _pad_1474[0x4]; // offset 0x1474
};
