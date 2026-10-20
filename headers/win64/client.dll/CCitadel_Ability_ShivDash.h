#pragma once

class CCitadel_Ability_ShivDash : public CCitadelBaseShivAbility /*0x0*/  // sizeof 0x1ED0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    VectorWS m_vStartPosition; // offset 0x16E0, size 0xC, align 4
    Vector m_vDashDirection; // offset 0x16EC, size 0xC, align 4
    bool m_bIsDashing; // offset 0x16F8, size 0x1, align 1
    char _pad_16F9[0x7]; // offset 0x16F9
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x1700, size 0x18, align 8
    VectorWS m_vecLastPosition; // offset 0x1718, size 0xC, align 4
    int32 m_nReductionsLeft; // offset 0x1724, size 0x4, align 4
    char _pad_1728[0x790]; // offset 0x1728
    GameTime_t m_flStuckTime; // offset 0x1EB8, size 0x4, align 255
    char _pad_1EBC[0x14]; // offset 0x1EBC
};
