#pragma once

class CBaseButton : public CBaseToggle /*0x0*/  // sizeof 0x900, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x800]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0x800, size 0xC, align 4
    bool m_fStayPushed; // offset 0x80C, size 0x1, align 1
    bool m_fRotating; // offset 0x80D, size 0x1, align 1
    char _pad_080E[0x2]; // offset 0x80E
    locksound_t m_ls; // offset 0x810, size 0x20, align 255 | MNotSaved
    CUtlSymbolLarge m_sUseSound; // offset 0x830, size 0x8, align 8
    CUtlSymbolLarge m_sLockedSound; // offset 0x838, size 0x8, align 8
    CUtlSymbolLarge m_sUnlockedSound; // offset 0x840, size 0x8, align 8
    CUtlSymbolLarge m_sOverrideAnticipationName; // offset 0x848, size 0x8, align 8
    bool m_bLocked; // offset 0x850, size 0x1, align 1
    bool m_bDisabled; // offset 0x851, size 0x1, align 1
    char _pad_0852[0x2]; // offset 0x852
    GameTime_t m_flUseLockedTime; // offset 0x854, size 0x4, align 255
    bool m_bSolidBsp; // offset 0x858, size 0x1, align 1
    char _pad_0859[0x7]; // offset 0x859
    CEntityIOOutput m_OnDamaged; // offset 0x860, size 0x18, align 255
    CEntityIOOutput m_OnPressed; // offset 0x878, size 0x18, align 255
    CEntityIOOutput m_OnUseLocked; // offset 0x890, size 0x18, align 255
    CEntityIOOutput m_OnIn; // offset 0x8A8, size 0x18, align 255
    CEntityIOOutput m_OnOut; // offset 0x8C0, size 0x18, align 255
    int32 m_nState; // offset 0x8D8, size 0x4, align 4 | MNotSaved
    CEntityHandle m_hConstraint; // offset 0x8DC, size 0x4, align 4
    CEntityHandle m_hConstraintParent; // offset 0x8E0, size 0x4, align 4
    bool m_bForceNpcExclude; // offset 0x8E4, size 0x1, align 1 | MNotSaved
    char _pad_08E5[0x3]; // offset 0x8E5
    CUtlSymbolLarge m_sGlowEntity; // offset 0x8E8, size 0x8, align 8
    CHandle< CBaseModelEntity > m_glowEntity; // offset 0x8F0, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_usable; // offset 0x8F4, size 0x1, align 1 | MNetworkEnable
    char _pad_08F5[0x3]; // offset 0x8F5
    CUtlSymbolLarge m_szDisplayText; // offset 0x8F8, size 0x8, align 8 | MNetworkEnable MNotSaved
};
