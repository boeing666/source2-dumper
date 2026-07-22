#pragma once

class CSurvivorsLevelDefinition  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    SurvivorsLevelID_t m_unLevelID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< CSurvivorsEnemyEventDefinition > m_vecEvents; // offset 0x8, size 0x18, align 8
    CUtlVector< CSurvivorsEnemyEventDefinition > m_vecBossEvents; // offset 0x20, size 0x18, align 8
    Vector2D m_vMapBounds; // offset 0x38, size 0x8, align 4
    Vector2D m_vEntityBounds; // offset 0x40, size 0x8, align 4
    char _pad_0048[0x8]; // offset 0x48
};
