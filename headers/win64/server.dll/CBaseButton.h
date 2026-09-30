#pragma once

class CBaseButton : public CBaseToggle /*0x0*/  // sizeof 0x9F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0x8F8, size 0xC, align 4
    bool m_fStayPushed; // offset 0x904, size 0x1, align 1
    bool m_fRotating; // offset 0x905, size 0x1, align 1
    char _pad_0906[0x2]; // offset 0x906
    locksound_t m_ls; // offset 0x908, size 0x20, align 8 | MNotSaved
    CGameSoundEventName m_sUseSound; // offset 0x928, size 0x8, align 8
    CGameSoundEventName m_sLockedSound; // offset 0x930, size 0x8, align 8
    CGameSoundEventName m_sUnlockedSound; // offset 0x938, size 0x8, align 8
    CUtlSymbolLarge m_sOverrideAnticipationName; // offset 0x940, size 0x8, align 8
    bool m_bLocked; // offset 0x948, size 0x1, align 1
    bool m_bDisabled; // offset 0x949, size 0x1, align 1
    char _pad_094A[0x2]; // offset 0x94A
    float32 m_flSpeed; // offset 0x94C, size 0x4, align 4
    GameTime_t m_flUseLockedTime; // offset 0x950, size 0x4, align 255
    bool m_bSolidBsp; // offset 0x954, size 0x1, align 1
    char _pad_0955[0x3]; // offset 0x955
    CEntityIOOutput m_OnDamaged; // offset 0x958, size 0x18, align 255
    CEntityIOOutput m_OnPressed; // offset 0x970, size 0x18, align 255
    CEntityIOOutput m_OnUseLocked; // offset 0x988, size 0x18, align 255
    CEntityIOOutput m_OnIn; // offset 0x9A0, size 0x18, align 255
    CEntityIOOutput m_OnOut; // offset 0x9B8, size 0x18, align 255
    int32 m_nState; // offset 0x9D0, size 0x4, align 4 | MNotSaved
    CEntityHandle m_hConstraint; // offset 0x9D4, size 0x4, align 4
    CEntityHandle m_hConstraintParent; // offset 0x9D8, size 0x4, align 4
    bool m_bForceNpcExclude; // offset 0x9DC, size 0x1, align 1 | MNotSaved
    char _pad_09DD[0x3]; // offset 0x9DD
    CUtlSymbolLarge m_sGlowEntity; // offset 0x9E0, size 0x8, align 8
    CHandle< CBaseModelEntity > m_glowEntity; // offset 0x9E8, size 0x4, align 4 | MNotSaved
    bool m_usable; // offset 0x9EC, size 0x1, align 1
    char _pad_09ED[0x3]; // offset 0x9ED
    CUtlSymbolLarge m_szDisplayText; // offset 0x9F0, size 0x8, align 8 | MNotSaved
};
