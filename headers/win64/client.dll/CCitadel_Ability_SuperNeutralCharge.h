#pragma once

class CCitadel_Ability_SuperNeutralCharge : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1638, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x15D8]; // offset 0x0
    bool m_bPreparing; // offset 0x15D8, size 0x1, align 1 | MNetworkEnable
    bool m_bTackling; // offset 0x15D9, size 0x1, align 1 | MNetworkEnable
    char _pad_15DA[0x2]; // offset 0x15DA
    GameTime_t m_flTackleStartTime; // offset 0x15DC, size 0x4, align 255 | MNetworkEnable
    float32 m_flTackleDuration; // offset 0x15E0, size 0x4, align 4 | MNetworkEnable
    Vector m_vecTackleDir; // offset 0x15E4, size 0xC, align 4 | MNetworkEnable
    Vector m_vecLastPosition; // offset 0x15F0, size 0xC, align 4
    int32 m_nStuckFramesCount; // offset 0x15FC, size 0x4, align 4
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x1600, size 0x18, align 8
    GameTime_t m_flPrepareStartTime; // offset 0x1618, size 0x4, align 255
    ParticleIndex_t m_nDistancePreview; // offset 0x161C, size 0x4, align 255
    char _pad_1620[0x18]; // offset 0x1620
};
