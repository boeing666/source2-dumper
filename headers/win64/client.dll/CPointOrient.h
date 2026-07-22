#pragma once

class CPointOrient : public C_BaseEntity /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CUtlSymbolLarge m_iszSpawnTargetName; // offset 0x5F0, size 0x8, align 8
    CHandle< C_BaseEntity > m_hTarget; // offset 0x5F8, size 0x4, align 4
    bool m_bActive; // offset 0x5FC, size 0x1, align 1
    char _pad_05FD[0x3]; // offset 0x5FD
    PointOrientGoalDirectionType_t m_nGoalDirection; // offset 0x600, size 0x4, align 4
    PointOrientConstraint_t m_nConstraint; // offset 0x604, size 0x4, align 4
    float32 m_flMaxTurnRate; // offset 0x608, size 0x4, align 4
    GameTime_t m_flLastGameTime; // offset 0x60C, size 0x4, align 255
};
