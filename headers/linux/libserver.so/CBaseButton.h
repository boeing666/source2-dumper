#pragma once

class CBaseButton : public CBaseToggle /*0x0*/  // sizeof 0xCA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBA8]; // offset 0x0
    QAngle m_angMoveEntitySpace; // offset 0xBA8, size 0xC, align 4
    bool m_fStayPushed; // offset 0xBB4, size 0x1, align 1
    bool m_fRotating; // offset 0xBB5, size 0x1, align 1
    char _pad_0BB6[0x2]; // offset 0xBB6
    locksound_t m_ls; // offset 0xBB8, size 0x20, align 8 | MNotSaved
    CGameSoundEventName m_sUseSound; // offset 0xBD8, size 0x8, align 8
    CGameSoundEventName m_sLockedSound; // offset 0xBE0, size 0x8, align 8
    CGameSoundEventName m_sUnlockedSound; // offset 0xBE8, size 0x8, align 8
    CUtlSymbolLarge m_sOverrideAnticipationName; // offset 0xBF0, size 0x8, align 8
    bool m_bLocked; // offset 0xBF8, size 0x1, align 1
    bool m_bDisabled; // offset 0xBF9, size 0x1, align 1
    char _pad_0BFA[0x2]; // offset 0xBFA
    float32 m_flSpeed; // offset 0xBFC, size 0x4, align 4
    GameTime_t m_flUseLockedTime; // offset 0xC00, size 0x4, align 255
    bool m_bSolidBsp; // offset 0xC04, size 0x1, align 1
    char _pad_0C05[0x3]; // offset 0xC05
    CEntityIOOutput m_OnDamaged; // offset 0xC08, size 0x18, align 255
    CEntityIOOutput m_OnPressed; // offset 0xC20, size 0x18, align 255
    CEntityIOOutput m_OnUseLocked; // offset 0xC38, size 0x18, align 255
    CEntityIOOutput m_OnIn; // offset 0xC50, size 0x18, align 255
    CEntityIOOutput m_OnOut; // offset 0xC68, size 0x18, align 255
    int32 m_nState; // offset 0xC80, size 0x4, align 4 | MNotSaved
    CEntityHandle m_hConstraint; // offset 0xC84, size 0x4, align 4
    CEntityHandle m_hConstraintParent; // offset 0xC88, size 0x4, align 4
    bool m_bForceNpcExclude; // offset 0xC8C, size 0x1, align 1 | MNotSaved
    char _pad_0C8D[0x3]; // offset 0xC8D
    CUtlSymbolLarge m_sGlowEntity; // offset 0xC90, size 0x8, align 8
    CHandle< CBaseModelEntity > m_glowEntity; // offset 0xC98, size 0x4, align 4 | MNotSaved
    bool m_usable; // offset 0xC9C, size 0x1, align 1
    char _pad_0C9D[0x3]; // offset 0xC9D
    CUtlSymbolLarge m_szDisplayText; // offset 0xCA0, size 0x8, align 8 | MNotSaved
};
