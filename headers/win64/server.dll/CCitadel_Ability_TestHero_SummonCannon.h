#pragma once

class CCitadel_Ability_TestHero_SummonCannon : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1838, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14AC]; // offset 0x0
    bool m_bCannonPending; // offset 0x14AC, size 0x1, align 1
    char _pad_14AD[0x3]; // offset 0x14AD
    VectorWS m_vLaunchPosition; // offset 0x14B0, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14BC, size 0xC, align 4
    char _pad_14C8[0x370]; // offset 0x14C8
};
