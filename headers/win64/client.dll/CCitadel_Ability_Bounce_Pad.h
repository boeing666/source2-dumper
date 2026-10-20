#pragma once

class CCitadel_Ability_Bounce_Pad : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1A70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    Vector m_vForward; // offset 0x16E0, size 0xC, align 4
    bool m_bShouldDeploy; // offset 0x16EC, size 0x1, align 1
    bool m_bAnglesSet; // offset 0x16ED, size 0x1, align 1
    bool m_bCanCancel; // offset 0x16EE, size 0x1, align 1
    char _pad_16EF[0x371]; // offset 0x16EF
    QAngle m_angFacing; // offset 0x1A60, size 0xC, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
