#pragma once

class CCitadel_Ability_TestHero_SummonCannon : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1A68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16DC]; // offset 0x0
    bool m_bCannonPending; // offset 0x16DC, size 0x1, align 1
    char _pad_16DD[0x3]; // offset 0x16DD
    VectorWS m_vLaunchPosition; // offset 0x16E0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x16EC, size 0xC, align 4
    char _pad_16F8[0x370]; // offset 0x16F8
};
