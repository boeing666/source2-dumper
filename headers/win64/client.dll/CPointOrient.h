#pragma once

class CPointOrient : public C_BaseEntity /*0x0*/  // sizeof 0x620, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CUtlSymbolLarge m_iszSpawnTargetName; // offset 0x600, size 0x8, align 8
    CHandle< C_BaseEntity > m_hTarget; // offset 0x608, size 0x4, align 4
    bool m_bActive; // offset 0x60C, size 0x1, align 1
    char _pad_060D[0x3]; // offset 0x60D
    PointOrientGoalDirectionType_t m_nGoalDirection; // offset 0x610, size 0x4, align 4
    PointOrientConstraint_t m_nConstraint; // offset 0x614, size 0x4, align 4
    float32 m_flMaxTurnRate; // offset 0x618, size 0x4, align 4
    GameTime_t m_flLastGameTime; // offset 0x61C, size 0x4, align 255
};
