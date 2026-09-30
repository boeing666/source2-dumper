#pragma once

class CCitadel_Ability_MobileResupply : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1568, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    VectorWS m_vDeployPosition; // offset 0x14A0, size 0xC, align 4
    QAngle m_angDeploy; // offset 0x14AC, size 0xC, align 4
    char _pad_14B8[0xB0]; // offset 0x14B8
};
