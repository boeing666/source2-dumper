#pragma once

class CModifier_Upgrade_ArcaneSurge_AbilityWatcher : public CCitadelModifier /*0x0*/  // sizeof 0x2C8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hBuffedAbility; // offset 0xC0, size 0x4, align 4
    bool m_bEnabled; // offset 0xC4, size 0x1, align 1
    char _pad_00C5[0x203]; // offset 0xC5
};
