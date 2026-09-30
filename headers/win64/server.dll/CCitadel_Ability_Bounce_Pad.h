#pragma once

class CCitadel_Ability_Bounce_Pad : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1848, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    Vector m_vForward; // offset 0x14A0, size 0xC, align 4
    bool m_bShouldDeploy; // offset 0x14AC, size 0x1, align 1
    bool m_bAnglesSet; // offset 0x14AD, size 0x1, align 1
    bool m_bCanCancel; // offset 0x14AE, size 0x1, align 1
    char _pad_14AF[0x371]; // offset 0x14AF
    QAngle m_angFacing; // offset 0x1820, size 0xC, align 4
    char _pad_182C[0x1C]; // offset 0x182C
};
