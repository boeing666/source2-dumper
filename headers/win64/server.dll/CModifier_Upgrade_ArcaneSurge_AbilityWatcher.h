#pragma once

class CModifier_Upgrade_ArcaneSurge_AbilityWatcher : public CCitadelModifier /*0x0*/  // sizeof 0x2D8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hBuffedAbility; // offset 0xD0, size 0x4, align 4
    bool m_bEnabled; // offset 0xD4, size 0x1, align 1
    char _pad_00D5[0x203]; // offset 0xD5
};
