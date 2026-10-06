#pragma once

class CModifier_Upgrade_ArcaneSurge_AbilityWatcher : public CCitadelModifier /*0x0*/  // sizeof 0x410, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hBuffedAbility; // offset 0x148, size 0x4, align 4
    bool m_bEnabled; // offset 0x14C, size 0x1, align 1
    char _pad_014D[0x2C3]; // offset 0x14D
};
