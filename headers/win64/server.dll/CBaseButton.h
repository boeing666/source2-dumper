#pragma once

class CBaseButton : public CBaseToggle /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0x7F0, size 0xC, align 4
    bool m_fStayPushed; // offset 0x7FC, size 0x1, align 1
    bool m_fRotating; // offset 0x7FD, size 0x1, align 1
    char _pad_07FE[0x2]; // offset 0x7FE
    locksound_t m_ls; // offset 0x800, size 0x20, align 8 | MNotSaved
    CGameSoundEventName m_sUseSound; // offset 0x820, size 0x8, align 8
    CGameSoundEventName m_sLockedSound; // offset 0x828, size 0x8, align 8
    CGameSoundEventName m_sUnlockedSound; // offset 0x830, size 0x8, align 8
    CUtlSymbolLarge m_sOverrideAnticipationName; // offset 0x838, size 0x8, align 8
    bool m_bLocked; // offset 0x840, size 0x1, align 1
    bool m_bDisabled; // offset 0x841, size 0x1, align 1
    char _pad_0842[0x2]; // offset 0x842
    float32 m_flSpeed; // offset 0x844, size 0x4, align 4
    GameTime_t m_flUseLockedTime; // offset 0x848, size 0x4, align 255
    bool m_bSolidBsp; // offset 0x84C, size 0x1, align 1
    char _pad_084D[0x3]; // offset 0x84D
    CEntityIOOutput m_OnDamaged; // offset 0x850, size 0x18, align 255
    CEntityIOOutput m_OnPressed; // offset 0x868, size 0x18, align 255
    CEntityIOOutput m_OnUseLocked; // offset 0x880, size 0x18, align 255
    CEntityIOOutput m_OnIn; // offset 0x898, size 0x18, align 255
    CEntityIOOutput m_OnOut; // offset 0x8B0, size 0x18, align 255
    int32 m_nState; // offset 0x8C8, size 0x4, align 4 | MNotSaved
    CEntityHandle m_hConstraint; // offset 0x8CC, size 0x4, align 4
    CEntityHandle m_hConstraintParent; // offset 0x8D0, size 0x4, align 4
    bool m_bForceNpcExclude; // offset 0x8D4, size 0x1, align 1 | MNotSaved
    char _pad_08D5[0x3]; // offset 0x8D5
    CUtlSymbolLarge m_sGlowEntity; // offset 0x8D8, size 0x8, align 8
    CHandle< CBaseModelEntity > m_glowEntity; // offset 0x8E0, size 0x4, align 4 | MNotSaved
    bool m_usable; // offset 0x8E4, size 0x1, align 1
    char _pad_08E5[0x3]; // offset 0x8E5
    CUtlSymbolLarge m_szDisplayText; // offset 0x8E8, size 0x8, align 8 | MNotSaved
};
