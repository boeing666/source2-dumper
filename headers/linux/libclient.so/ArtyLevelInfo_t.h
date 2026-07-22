#pragma once

struct ArtyLevelInfo_t  // sizeof 0x138, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
    char _pad_0000[0x8]; // offset 0x0
    ArtyLevelID_t m_unID; // offset 0x8, size 0x4, align 255
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_sLocLevelName; // offset 0x10, size 0x8, align 8
    ArtyLevelObjectInstance_t m_playerInfo; // offset 0x18, size 0x88, align 8
    CUtlVector< ArtyLevelObjectInstance_t > m_vecGameObjects; // offset 0xA0, size 0x18, align 8
    CUtlVector< ArtyLevelWeaponInstance_t > m_vecWeapons; // offset 0xB8, size 0x18, align 8
    int32 m_nLevelCompletePoints; // offset 0xD0, size 0x4, align 4
    int32 m_nTimeBonusBasePoints; // offset 0xD4, size 0x4, align 4
    int32 m_nTimeBonusMaxPoints; // offset 0xD8, size 0x4, align 4
    int32 m_nTimeBonusFastTime; // offset 0xDC, size 0x4, align 4
    int32 m_nTimeBonusMaxTime; // offset 0xE0, size 0x4, align 4
    float32 m_flBackgroundOffsetX; // offset 0xE4, size 0x4, align 4
    int32[3] m_aryStarPointThresholds; // offset 0xE8, size 0xC, align 4
    char _pad_00F4[0x4]; // offset 0xF4
    CPanoramaImageName m_sBackgroundImage; // offset 0xF8, size 0x10, align 8
    CPanoramaImageName m_sTerrainBackgroundImage; // offset 0x108, size 0x10, align 8
    CPanoramaImageName m_sTerrainImage; // offset 0x118, size 0x10, align 8
    CPanoramaImageName m_sTerrainForegroundImage; // offset 0x128, size 0x10, align 8
};
