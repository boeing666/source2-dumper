#pragma once

class CInferno : public CBaseModelEntity /*0x0*/  // sizeof 0x14D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    VectorWS[64] m_firePositions; // offset 0x850, size 0x300, align 4
    VectorWS[64] m_fireParentPositions; // offset 0xB50, size 0x300, align 4
    bool[64] m_bFireIsBurning; // offset 0xE50, size 0x40, align 1
    Vector[64] m_BurnNormal; // offset 0xE90, size 0x300, align 4
    int32 m_fireCount; // offset 0x1190, size 0x4, align 4
    int32 m_nInfernoType; // offset 0x1194, size 0x4, align 4
    int32 m_nFireEffectTickBegin; // offset 0x1198, size 0x4, align 4
    float32 m_nFireLifetime; // offset 0x119C, size 0x4, align 4
    bool m_bInPostEffectTime; // offset 0x11A0, size 0x1, align 1
    bool m_bWasCreatedInSmoke; // offset 0x11A1, size 0x1, align 1
    char _pad_11A2[0x206]; // offset 0x11A2
    Extent m_extent; // offset 0x13A8, size 0x18, align 255
    CountdownTimer m_damageTimer; // offset 0x13C0, size 0x18, align 8
    CountdownTimer m_damageRampTimer; // offset 0x13D8, size 0x18, align 8
    Vector m_splashVelocity; // offset 0x13F0, size 0xC, align 4
    Vector m_InitialSplashVelocity; // offset 0x13FC, size 0xC, align 4
    VectorWS m_startPos; // offset 0x1408, size 0xC, align 4
    VectorWS m_vecOriginalSpawnLocation; // offset 0x1414, size 0xC, align 4
    IntervalTimer m_activeTimer; // offset 0x1420, size 0x10, align 8
    int32 m_fireSpawnOffset; // offset 0x1430, size 0x4, align 4
    int32 m_nMaxFlames; // offset 0x1434, size 0x4, align 4
    int32 m_nSpreadCount; // offset 0x1438, size 0x4, align 4
    char _pad_143C[0x4]; // offset 0x143C
    CountdownTimer m_BookkeepingTimer; // offset 0x1440, size 0x18, align 8
    CountdownTimer m_NextSpreadTimer; // offset 0x1458, size 0x18, align 8
    uint16 m_nSourceItemDefIndex; // offset 0x1470, size 0x2, align 2
    char _pad_1472[0x66]; // offset 0x1472
};
