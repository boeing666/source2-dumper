#pragma once

class CCitadel_Ability_SuperNeutralCharge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x13D0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1370]; // offset 0x0
    bool m_bPreparing; // offset 0x1370, size 0x1, align 1 | MNetworkEnable
    bool m_bTackling; // offset 0x1371, size 0x1, align 1 | MNetworkEnable
    char _pad_1372[0x2]; // offset 0x1372
    GameTime_t m_flTackleStartTime; // offset 0x1374, size 0x4, align 255 | MNetworkEnable
    float32 m_flTackleDuration; // offset 0x1378, size 0x4, align 4 | MNetworkEnable
    Vector m_vecTackleDir; // offset 0x137C, size 0xC, align 4 | MNetworkEnable
    Vector m_vecLastPosition; // offset 0x1388, size 0xC, align 4
    int32 m_nStuckFramesCount; // offset 0x1394, size 0x4, align 4
    CUtlVector< CEntityIndex > m_vecHitEnemies; // offset 0x1398, size 0x18, align 8
    GameTime_t m_flPrepareStartTime; // offset 0x13B0, size 0x4, align 255
    ParticleIndex_t m_nDistancePreview; // offset 0x13B4, size 0x4, align 255
    char _pad_13B8[0x18]; // offset 0x13B8
};
