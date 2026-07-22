#pragma once

class CDOTABehaviorPoogie : public CDOTABehaviorCompanion /*0x0*/  // sizeof 0x258, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x180]; // offset 0x0
    CHandle< CBaseEntity > m_hMyHero; // offset 0x180, size 0x4, align 4
    CHandle< CBaseEntity > m_hEffigy; // offset 0x184, size 0x4, align 4
    CHandle< CBaseEntity > m_hHighFiveAbility; // offset 0x188, size 0x4, align 4
    char _pad_018C[0xC]; // offset 0x18C
    bool m_bEnemiesNearBase; // offset 0x198, size 0x1, align 1
    char _pad_0199[0x3]; // offset 0x199
    int32 m_iRightOffsetEffigy; // offset 0x19C, size 0x4, align 4
    int32 m_iForwardOffsetEffigy; // offset 0x1A0, size 0x4, align 4
    int32 m_iRightOffsetHero; // offset 0x1A4, size 0x4, align 4
    int32 m_iForwardOffsetHero; // offset 0x1A8, size 0x4, align 4
    char _pad_01AC[0x4]; // offset 0x1AC
    CountdownTimer m_PositionOffsetsTimer; // offset 0x1B0, size 0x18, align 8
    CountdownTimer m_HighFiveTimer; // offset 0x1C8, size 0x18, align 8
    CountdownTimer m_EmoteTimer; // offset 0x1E0, size 0x18, align 8
    CountdownTimer m_VanishTimer; // offset 0x1F8, size 0x18, align 8
    CountdownTimer m_GreetHeroTimer; // offset 0x210, size 0x18, align 8
    CountdownTimer m_EnemiesNearBaseTimer; // offset 0x228, size 0x18, align 8
    CountdownTimer m_FindEffigyTimer; // offset 0x240, size 0x18, align 8
};
