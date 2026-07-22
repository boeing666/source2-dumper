#pragma once

class CCitadel_Ability_ChargedTackle : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x16A0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1658]; // offset 0x0
    bool m_bPreparing; // offset 0x1658, size 0x1, align 1 | MNetworkEnable
    bool m_bTackling; // offset 0x1659, size 0x1, align 1 | MNetworkEnable
    char _pad_165A[0x2]; // offset 0x165A
    GameTime_t m_flTackleStartTime; // offset 0x165C, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flPrepareStartTime; // offset 0x1660, size 0x4, align 255 | MNetworkEnable
    Vector m_vecTackleDir; // offset 0x1664, size 0xC, align 4 | MNetworkEnable
    Vector m_vecLastPosition; // offset 0x1670, size 0xC, align 4
    int32 m_nStuckFramesCount; // offset 0x167C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // offset 0x1680, size 0x18, align 8
    ParticleIndex_t m_nDistancePreview; // offset 0x1698, size 0x4, align 255
    char _pad_169C[0x4]; // offset 0x169C
};
