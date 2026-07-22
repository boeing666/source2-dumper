#pragma once

class CBaseButton : public CBaseToggle /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xAC8]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0xAC8, size 0xC, align 4
    bool m_fStayPushed; // offset 0xAD4, size 0x1, align 1
    bool m_fRotating; // offset 0xAD5, size 0x1, align 1
    char _pad_0AD6[0x2]; // offset 0xAD6
    locksound_t m_ls; // offset 0xAD8, size 0x20, align 8 | MNotSaved
    CGameSoundEventName m_sUseSound; // offset 0xAF8, size 0x8, align 8
    CGameSoundEventName m_sLockedSound; // offset 0xB00, size 0x8, align 8
    CGameSoundEventName m_sUnlockedSound; // offset 0xB08, size 0x8, align 8
    CUtlSymbolLarge m_sOverrideAnticipationName; // offset 0xB10, size 0x8, align 8
    bool m_bLocked; // offset 0xB18, size 0x1, align 1
    bool m_bDisabled; // offset 0xB19, size 0x1, align 1
    char _pad_0B1A[0x2]; // offset 0xB1A
    float32 m_flSpeed; // offset 0xB1C, size 0x4, align 4
    GameTime_t m_flUseLockedTime; // offset 0xB20, size 0x4, align 255
    bool m_bSolidBsp; // offset 0xB24, size 0x1, align 1
    char _pad_0B25[0x3]; // offset 0xB25
    CEntityIOOutput m_OnDamaged; // offset 0xB28, size 0x18, align 255
    CEntityIOOutput m_OnPressed; // offset 0xB40, size 0x18, align 255
    CEntityIOOutput m_OnUseLocked; // offset 0xB58, size 0x18, align 255
    CEntityIOOutput m_OnIn; // offset 0xB70, size 0x18, align 255
    CEntityIOOutput m_OnOut; // offset 0xB88, size 0x18, align 255
    int32 m_nState; // offset 0xBA0, size 0x4, align 4 | MNotSaved
    CEntityHandle m_hConstraint; // offset 0xBA4, size 0x4, align 4
    CEntityHandle m_hConstraintParent; // offset 0xBA8, size 0x4, align 4
    bool m_bForceNpcExclude; // offset 0xBAC, size 0x1, align 1 | MNotSaved
    char _pad_0BAD[0x3]; // offset 0xBAD
    CUtlSymbolLarge m_sGlowEntity; // offset 0xBB0, size 0x8, align 8
    CHandle< CBaseModelEntity > m_glowEntity; // offset 0xBB8, size 0x4, align 4 | MNotSaved
    bool m_usable; // offset 0xBBC, size 0x1, align 1
    char _pad_0BBD[0x3]; // offset 0xBBD
    CUtlSymbolLarge m_szDisplayText; // offset 0xBC0, size 0x8, align 8 | MNotSaved
};
