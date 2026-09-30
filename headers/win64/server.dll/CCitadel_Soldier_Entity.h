#pragma once

class CCitadel_Soldier_Entity : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBF0]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xBF0, size 0x4, align 4
    int32 m_iSoldierState; // offset 0xBF4, size 0x4, align 4
    float32 m_flLifetime; // offset 0xBF8, size 0x4, align 4
    char _pad_0BFC[0x4]; // offset 0xBFC
};
