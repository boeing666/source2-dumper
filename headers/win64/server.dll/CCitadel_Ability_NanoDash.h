#pragma once

class CCitadel_Ability_NanoDash : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1E00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    VectorWS m_vStartPosition; // offset 0x14A8, size 0xC, align 4
    VectorWS m_vEndPosition; // offset 0x14B4, size 0xC, align 4
    bool m_bIsDashing; // offset 0x14C0, size 0x1, align 1
    char _pad_14C1[0x7]; // offset 0x14C1
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x14C8, size 0x18, align 8
    VectorWS m_vecLastPosition; // offset 0x14E0, size 0xC, align 4
    char _pad_14EC[0x8F4]; // offset 0x14EC
    GameTime_t m_flStuckTime; // offset 0x1DE0, size 0x4, align 255
    char _pad_1DE4[0x1C]; // offset 0x1DE4
};
