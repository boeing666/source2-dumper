#pragma once

class CModifier_Upgrade_ArcaneSurge_AbilityWatcher : public CCitadelModifier /*0x0*/  // sizeof 0x400, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hBuffedAbility; // offset 0x138, size 0x4, align 4
    bool m_bEnabled; // offset 0x13C, size 0x1, align 1
    char _pad_013D[0x2C3]; // offset 0x13D
};
