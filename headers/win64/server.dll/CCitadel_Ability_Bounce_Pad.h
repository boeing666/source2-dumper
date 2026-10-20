#pragma once

class CCitadel_Ability_Bounce_Pad : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1850, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    Vector m_vForward; // offset 0x14A8, size 0xC, align 4
    bool m_bShouldDeploy; // offset 0x14B4, size 0x1, align 1
    bool m_bAnglesSet; // offset 0x14B5, size 0x1, align 1
    bool m_bCanCancel; // offset 0x14B6, size 0x1, align 1
    char _pad_14B7[0x371]; // offset 0x14B7
    QAngle m_angFacing; // offset 0x1828, size 0xC, align 4
    char _pad_1834[0x1C]; // offset 0x1834
};
