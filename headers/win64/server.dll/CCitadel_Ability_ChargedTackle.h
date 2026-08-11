#pragma once

class CCitadel_Ability_ChargedTackle : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1438, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x13F0]; // offset 0x0
    bool m_bPreparing; // offset 0x13F0, size 0x1, align 1 | MNetworkEnable
    bool m_bTackling; // offset 0x13F1, size 0x1, align 1 | MNetworkEnable
    char _pad_13F2[0x2]; // offset 0x13F2
    GameTime_t m_flTackleStartTime; // offset 0x13F4, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flPrepareStartTime; // offset 0x13F8, size 0x4, align 255 | MNetworkEnable
    Vector m_vecTackleDir; // offset 0x13FC, size 0xC, align 4 | MNetworkEnable
    Vector m_vecLastPosition; // offset 0x1408, size 0xC, align 4
    int32 m_nStuckFramesCount; // offset 0x1414, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // offset 0x1418, size 0x18, align 8
    ParticleIndex_t m_nDistancePreview; // offset 0x1430, size 0x4, align 255
    char _pad_1434[0x4]; // offset 0x1434
};
