#pragma once

class CPointOrient : public CBaseEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CUtlSymbolLarge m_iszSpawnTargetName; // offset 0x4A8, size 0x8, align 8
    CHandle< CBaseEntity > m_hTarget; // offset 0x4B0, size 0x4, align 4
    bool m_bActive; // offset 0x4B4, size 0x1, align 1
    char _pad_04B5[0x3]; // offset 0x4B5
    PointOrientGoalDirectionType_t m_nGoalDirection; // offset 0x4B8, size 0x4, align 4
    PointOrientConstraint_t m_nConstraint; // offset 0x4BC, size 0x4, align 4
    float32 m_flMaxTurnRate; // offset 0x4C0, size 0x4, align 4
    GameTime_t m_flLastGameTime; // offset 0x4C4, size 0x4, align 255
};
