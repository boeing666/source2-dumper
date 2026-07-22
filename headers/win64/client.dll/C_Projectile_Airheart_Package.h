#pragma once

class C_Projectile_Airheart_Package : public CBaseAnimGraph /*0x0*/  // sizeof 0xCB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    C_CitadelBaseAbility* m_pAbility; // offset 0xCA8, size 0x8, align 8
    float32 m_flStunDuration; // offset 0xCB0, size 0x4, align 4
    float32 m_flStunRadius; // offset 0xCB4, size 0x4, align 4
};
