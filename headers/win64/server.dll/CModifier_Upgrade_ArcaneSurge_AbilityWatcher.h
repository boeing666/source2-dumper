#pragma once

class CModifier_Upgrade_ArcaneSurge_AbilityWatcher : public CCitadelModifier /*0x0*/  // sizeof 0x408, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hBuffedAbility; // offset 0x140, size 0x4, align 4
    bool m_bEnabled; // offset 0x144, size 0x1, align 1
    char _pad_0145[0x2C3]; // offset 0x145
};
