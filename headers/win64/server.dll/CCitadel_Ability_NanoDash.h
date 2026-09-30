#pragma once

class CCitadel_Ability_NanoDash : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1DF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    VectorWS m_vStartPosition; // offset 0x14A0, size 0xC, align 4
    VectorWS m_vEndPosition; // offset 0x14AC, size 0xC, align 4
    bool m_bIsDashing; // offset 0x14B8, size 0x1, align 1
    char _pad_14B9[0x7]; // offset 0x14B9
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x14C0, size 0x18, align 8
    VectorWS m_vecLastPosition; // offset 0x14D8, size 0xC, align 4
    char _pad_14E4[0x8F4]; // offset 0x14E4
    GameTime_t m_flStuckTime; // offset 0x1DD8, size 0x4, align 255
    char _pad_1DDC[0x1C]; // offset 0x1DDC
};
