#pragma once

class CSurvivorsGameSnapshot  // sizeof 0x78, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    SurvivorsGameModeID_t m_gameModeID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CSurvivorsPlayerSnapshot m_playerSnapshot; // offset 0x8, size 0x38, align 8
    CUtlVector< CSurvivorsEnemySnapshot > m_enemiesSnapshot; // offset 0x40, size 0x18, align 8
    CUtlVector< CSurvivorsPickupSnapshot > m_pickupsSnapshot; // offset 0x58, size 0x18, align 8
    float32 m_flGameTime; // offset 0x70, size 0x4, align 4
    int32 m_nCurrentLevelEvent; // offset 0x74, size 0x4, align 4
};
