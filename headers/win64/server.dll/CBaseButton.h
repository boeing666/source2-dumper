#pragma once

class CBaseButton : public CBaseToggle /*0x0*/  // sizeof 0x9D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D0]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0x8D0, size 0xC, align 4
    bool m_fStayPushed; // offset 0x8DC, size 0x1, align 1
    bool m_fRotating; // offset 0x8DD, size 0x1, align 1
    char _pad_08DE[0x2]; // offset 0x8DE
    locksound_t m_ls; // offset 0x8E0, size 0x20, align 8 | MNotSaved
    CGameSoundEventName m_sUseSound; // offset 0x900, size 0x8, align 8
    CGameSoundEventName m_sLockedSound; // offset 0x908, size 0x8, align 8
    CGameSoundEventName m_sUnlockedSound; // offset 0x910, size 0x8, align 8
    CUtlSymbolLarge m_sOverrideAnticipationName; // offset 0x918, size 0x8, align 8
    bool m_bLocked; // offset 0x920, size 0x1, align 1
    bool m_bDisabled; // offset 0x921, size 0x1, align 1
    char _pad_0922[0x2]; // offset 0x922
    float32 m_flSpeed; // offset 0x924, size 0x4, align 4
    GameTime_t m_flUseLockedTime; // offset 0x928, size 0x4, align 255
    bool m_bSolidBsp; // offset 0x92C, size 0x1, align 1
    char _pad_092D[0x3]; // offset 0x92D
    CEntityIOOutput m_OnDamaged; // offset 0x930, size 0x18, align 255
    CEntityIOOutput m_OnPressed; // offset 0x948, size 0x18, align 255
    CEntityIOOutput m_OnUseLocked; // offset 0x960, size 0x18, align 255
    CEntityIOOutput m_OnIn; // offset 0x978, size 0x18, align 255
    CEntityIOOutput m_OnOut; // offset 0x990, size 0x18, align 255
    int32 m_nState; // offset 0x9A8, size 0x4, align 4 | MNotSaved
    CEntityHandle m_hConstraint; // offset 0x9AC, size 0x4, align 4
    CEntityHandle m_hConstraintParent; // offset 0x9B0, size 0x4, align 4
    bool m_bForceNpcExclude; // offset 0x9B4, size 0x1, align 1 | MNotSaved
    char _pad_09B5[0x3]; // offset 0x9B5
    CUtlSymbolLarge m_sGlowEntity; // offset 0x9B8, size 0x8, align 8
    CHandle< CBaseModelEntity > m_glowEntity; // offset 0x9C0, size 0x4, align 4 | MNotSaved
    bool m_usable; // offset 0x9C4, size 0x1, align 1
    char _pad_09C5[0x3]; // offset 0x9C5
    CUtlSymbolLarge m_szDisplayText; // offset 0x9C8, size 0x8, align 8 | MNotSaved
};
