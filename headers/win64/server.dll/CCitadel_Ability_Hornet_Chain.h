#pragma once

class CCitadel_Ability_Hornet_Chain : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1208, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0xF70, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0xF7C, size 0xC, align 4
    char _pad_0F88[0x280]; // offset 0xF88
};
