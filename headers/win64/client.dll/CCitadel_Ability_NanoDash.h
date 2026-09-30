#pragma once

class CCitadel_Ability_NanoDash : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2018, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    VectorWS m_vStartPosition; // offset 0x16D8, size 0xC, align 4
    VectorWS m_vEndPosition; // offset 0x16E4, size 0xC, align 4
    bool m_bIsDashing; // offset 0x16F0, size 0x1, align 1
    char _pad_16F1[0x7]; // offset 0x16F1
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x16F8, size 0x18, align 8
    VectorWS m_vecLastPosition; // offset 0x1710, size 0xC, align 4
    char _pad_171C[0x8F4]; // offset 0x171C
    GameTime_t m_flStuckTime; // offset 0x2010, size 0x4, align 255
    char _pad_2014[0x4]; // offset 0x2014
};
