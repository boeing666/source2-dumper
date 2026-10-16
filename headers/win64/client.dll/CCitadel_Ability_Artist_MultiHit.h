#pragma once

class CCitadel_Ability_Artist_MultiHit : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1DE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    C_CitadelBaseAbility* m_pTriggerAbility; // offset 0x16D8, size 0x8, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x16E0, size 0x18, align 8
    GameTime_t m_tMultiHitEndTime; // offset 0x16F8, size 0x4, align 255
    GameTime_t m_tSubCooldownEndTime; // offset 0x16FC, size 0x4, align 255
    bool m_bActive; // offset 0x1700, size 0x1, align 1
    char _pad_1701[0x3]; // offset 0x1701
    int32 m_iCurrentHits; // offset 0x1704, size 0x4, align 4
    char _pad_1708[0x6E0]; // offset 0x1708
};
