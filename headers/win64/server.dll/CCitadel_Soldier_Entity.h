#pragma once

class CCitadel_Soldier_Entity : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xC40, size 0x4, align 4
    int32 m_iSoldierState; // offset 0xC44, size 0x4, align 4
    float32 m_flLifetime; // offset 0xC48, size 0x4, align 4
    char _pad_0C4C[0x4]; // offset 0xC4C
};
