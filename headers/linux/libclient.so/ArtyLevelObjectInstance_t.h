#pragma once

struct ArtyLevelObjectInstance_t : public ArtyGameObjectInstance_t /*0x0*/  // sizeof 0x88, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x38]; // offset 0x0
    CUtlString m_szLeftBorderObject; // offset 0x38, size 0x8, align 8
    float32 m_flLeftObjectOffset; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
    CUtlString m_szRightBorderObject; // offset 0x48, size 0x8, align 8
    float32 m_flRightObjectOffset; // offset 0x50, size 0x4, align 4
    bool m_bRandomPosition; // offset 0x54, size 0x1, align 1
    bool m_bRepositionToTerrain; // offset 0x55, size 0x1, align 1
    char _pad_0056[0x2]; // offset 0x56
    float32 m_flLeftBorderWidthMult; // offset 0x58, size 0x4, align 4
    float32 m_flRightBorderWidthMult; // offset 0x5C, size 0x4, align 4
    float32 m_flAppearanceChance; // offset 0x60, size 0x4, align 4
    EArtyTeam m_eTeam; // offset 0x64, size 0x1, align 1
    char _pad_0065[0x3]; // offset 0x65
    float32 m_flTimeOffset; // offset 0x68, size 0x4, align 4
    char _pad_006C[0x4]; // offset 0x6C
    CUtlVector< ArtyEnemyOrder_t > m_vecCustomOrders; // offset 0x70, size 0x18, align 8
};
