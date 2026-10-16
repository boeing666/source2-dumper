#pragma once

class CCitadel_Ability_Artist_StoneTurtle : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1B10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    VectorWS m_vecLaunchPosition; // offset 0x16D8, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x16E4, size 0xC, align 4
    char _pad_16F0[0x420]; // offset 0x16F0
};
