#pragma once

class CCitadel_Ability_Artist_MultiHit : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1BB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CCitadelBaseAbility* m_pTriggerAbility; // offset 0x14A0, size 0x8, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0x14A8, size 0x18, align 8
    GameTime_t m_tMultiHitEndTime; // offset 0x14C0, size 0x4, align 255
    GameTime_t m_tSubCooldownEndTime; // offset 0x14C4, size 0x4, align 255
    bool m_bActive; // offset 0x14C8, size 0x1, align 1
    char _pad_14C9[0x3]; // offset 0x14C9
    int32 m_iCurrentHits; // offset 0x14CC, size 0x4, align 4
    char _pad_14D0[0x6E0]; // offset 0x14D0
};
