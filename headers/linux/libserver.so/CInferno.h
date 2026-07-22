#pragma once

class CInferno : public CBaseModelEntity /*0x0*/  // sizeof 0x16D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    VectorWS[64] m_firePositions; // offset 0xA4C, size 0x300, align 4
    VectorWS[64] m_fireParentPositions; // offset 0xD4C, size 0x300, align 4
    bool[64] m_bFireIsBurning; // offset 0x104C, size 0x40, align 1
    Vector[64] m_BurnNormal; // offset 0x108C, size 0x300, align 4
    int32 m_fireCount; // offset 0x138C, size 0x4, align 4
    int32 m_nInfernoType; // offset 0x1390, size 0x4, align 4
    int32 m_nFireEffectTickBegin; // offset 0x1394, size 0x4, align 4
    float32 m_nFireLifetime; // offset 0x1398, size 0x4, align 4
    bool m_bInPostEffectTime; // offset 0x139C, size 0x1, align 1
    bool m_bWasCreatedInSmoke; // offset 0x139D, size 0x1, align 1
    char _pad_139E[0x202]; // offset 0x139E
    Extent m_extent; // offset 0x15A0, size 0x18, align 255
    CountdownTimer m_damageTimer; // offset 0x15B8, size 0x18, align 8
    CountdownTimer m_damageRampTimer; // offset 0x15D0, size 0x18, align 8
    Vector m_splashVelocity; // offset 0x15E8, size 0xC, align 4
    Vector m_InitialSplashVelocity; // offset 0x15F4, size 0xC, align 4
    VectorWS m_startPos; // offset 0x1600, size 0xC, align 4
    VectorWS m_vecOriginalSpawnLocation; // offset 0x160C, size 0xC, align 4
    IntervalTimer m_activeTimer; // offset 0x1618, size 0x10, align 8
    int32 m_fireSpawnOffset; // offset 0x1628, size 0x4, align 4
    int32 m_nMaxFlames; // offset 0x162C, size 0x4, align 4
    int32 m_nSpreadCount; // offset 0x1630, size 0x4, align 4
    char _pad_1634[0x4]; // offset 0x1634
    CountdownTimer m_BookkeepingTimer; // offset 0x1638, size 0x18, align 8
    CountdownTimer m_NextSpreadTimer; // offset 0x1650, size 0x18, align 8
    uint16 m_nSourceItemDefIndex; // offset 0x1668, size 0x2, align 2
    char _pad_166A[0x66]; // offset 0x166A
};
