#pragma once

class CCitadel_Ability_Bounce_Pad : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1228, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    Vector m_vForward; // offset 0xF70, size 0xC, align 4
    bool m_bShouldDeploy; // offset 0xF7C, size 0x1, align 1
    bool m_bAnglesSet; // offset 0xF7D, size 0x1, align 1
    bool m_bCanCancel; // offset 0xF7E, size 0x1, align 1
    char _pad_0F7F[0x281]; // offset 0xF7F
    QAngle m_angFacing; // offset 0x1200, size 0xC, align 4 | MNetworkEnable
    char _pad_120C[0x1C]; // offset 0x120C
};
