#pragma once

class CCitadel_Ability_Artist_StoneTurtle : public CCitadelBaseAbility /*0x0*/  // sizeof 0x18E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    VectorWS m_vecLaunchPosition; // offset 0x14A8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14B4, size 0xC, align 4
    char _pad_14C0[0x420]; // offset 0x14C0
};
