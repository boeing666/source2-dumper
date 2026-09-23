#pragma once

class CInferno : public CBaseModelEntity /*0x0*/  // sizeof 0x17B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    VectorWS[64] m_firePositions; // offset 0xB2C, size 0x300, align 4
    VectorWS[64] m_fireParentPositions; // offset 0xE2C, size 0x300, align 4
    bool[64] m_bFireIsBurning; // offset 0x112C, size 0x40, align 1
    Vector[64] m_BurnNormal; // offset 0x116C, size 0x300, align 4
    int32 m_fireCount; // offset 0x146C, size 0x4, align 4
    int32 m_nInfernoType; // offset 0x1470, size 0x4, align 4
    int32 m_nFireEffectTickBegin; // offset 0x1474, size 0x4, align 4
    float32 m_nFireLifetime; // offset 0x1478, size 0x4, align 4
    bool m_bInPostEffectTime; // offset 0x147C, size 0x1, align 1
    bool m_bWasCreatedInSmoke; // offset 0x147D, size 0x1, align 1
    char _pad_147E[0x202]; // offset 0x147E
    Extent m_extent; // offset 0x1680, size 0x18, align 255
    CountdownTimer m_damageTimer; // offset 0x1698, size 0x18, align 8
    CountdownTimer m_damageRampTimer; // offset 0x16B0, size 0x18, align 8
    Vector m_splashVelocity; // offset 0x16C8, size 0xC, align 4
    Vector m_InitialSplashVelocity; // offset 0x16D4, size 0xC, align 4
    VectorWS m_startPos; // offset 0x16E0, size 0xC, align 4
    VectorWS m_vecOriginalSpawnLocation; // offset 0x16EC, size 0xC, align 4
    IntervalTimer m_activeTimer; // offset 0x16F8, size 0x10, align 8
    int32 m_fireSpawnOffset; // offset 0x1708, size 0x4, align 4
    int32 m_nMaxFlames; // offset 0x170C, size 0x4, align 4
    int32 m_nSpreadCount; // offset 0x1710, size 0x4, align 4
    char _pad_1714[0x4]; // offset 0x1714
    CountdownTimer m_BookkeepingTimer; // offset 0x1718, size 0x18, align 8
    CountdownTimer m_NextSpreadTimer; // offset 0x1730, size 0x18, align 8
    uint16 m_nSourceItemDefIndex; // offset 0x1748, size 0x2, align 2
    char _pad_174A[0x66]; // offset 0x174A
};
