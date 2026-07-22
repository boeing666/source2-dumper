#pragma once

class CCitadel_Ability_FissureWall : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1448, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11E8]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecWallPreviewParticles; // offset 0x11E8, size 0x18, align 8
    char _pad_1200[0x200]; // offset 0x1200
    VectorWS m_vecPosition; // offset 0x1400, size 0xC, align 4 | MNetworkEnable
    VectorWS m_vecTravellingPosition; // offset 0x140C, size 0xC, align 4 | MNetworkEnable
    VectorWS m_vecInitialPosition; // offset 0x1418, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_CastTime; // offset 0x1424, size 0x4, align 255 | MNetworkEnable
    Vector m_vecDirection; // offset 0x1428, size 0xC, align 4 | MNetworkEnable
    Vector m_vecLeft; // offset 0x1434, size 0xC, align 4 | MNetworkEnable
    float32 m_Length; // offset 0x1440, size 0x4, align 4 | MNetworkEnable
    bool m_bTraveling; // offset 0x1444, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bPreview; // offset 0x1445, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_1446[0x2]; // offset 0x1446
};
