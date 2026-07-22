#pragma once

class CDOTABehaviorAbilityPhase  // sizeof 0xA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CountdownTimer m_abilityTimer; // offset 0x60, size 0x18, align 8
    CountdownTimer m_backSwingTimer; // offset 0x78, size 0x18, align 8
    bool m_bBackswinging; // offset 0x90, size 0x1, align 1
    char _pad_0091[0x3]; // offset 0x91
    CHandle< CBaseEntity > m_hAbility; // offset 0x94, size 0x4, align 4
    bool m_bActionLocked; // offset 0x98, size 0x1, align 1
    bool m_bTargetTeleported; // offset 0x99, size 0x1, align 1
    bool m_bOriginalTargetTeleported; // offset 0x9A, size 0x1, align 1
    char _pad_009B[0x5]; // offset 0x9B
};
