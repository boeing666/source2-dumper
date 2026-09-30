#pragma once

class CCitadel_Ability_Bounce_Pad : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1A68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    Vector m_vForward; // offset 0x16D8, size 0xC, align 4
    bool m_bShouldDeploy; // offset 0x16E4, size 0x1, align 1
    bool m_bAnglesSet; // offset 0x16E5, size 0x1, align 1
    bool m_bCanCancel; // offset 0x16E6, size 0x1, align 1
    char _pad_16E7[0x371]; // offset 0x16E7
    QAngle m_angFacing; // offset 0x1A58, size 0xC, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
};
