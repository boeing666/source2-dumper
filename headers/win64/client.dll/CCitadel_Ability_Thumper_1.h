#pragma once

class CCitadel_Ability_Thumper_1 : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    VectorWS m_vecAimPos; // offset 0x16D8, size 0xC, align 4
    Vector m_vecAimNormal; // offset 0x16E4, size 0xC, align 4
    float32 m_flPushForce; // offset 0x16F0, size 0x4, align 4
    char _pad_16F4[0x4D4]; // offset 0x16F4
};
