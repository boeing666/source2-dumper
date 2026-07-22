#pragma once

class CInferno : public CBaseModelEntity /*0x0*/  // sizeof 0x13F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    VectorWS[64] m_firePositions; // offset 0x770, size 0x300, align 4
    VectorWS[64] m_fireParentPositions; // offset 0xA70, size 0x300, align 4
    bool[64] m_bFireIsBurning; // offset 0xD70, size 0x40, align 1
    Vector[64] m_BurnNormal; // offset 0xDB0, size 0x300, align 4
    int32 m_fireCount; // offset 0x10B0, size 0x4, align 4
    int32 m_nInfernoType; // offset 0x10B4, size 0x4, align 4
    int32 m_nFireEffectTickBegin; // offset 0x10B8, size 0x4, align 4
    float32 m_nFireLifetime; // offset 0x10BC, size 0x4, align 4
    bool m_bInPostEffectTime; // offset 0x10C0, size 0x1, align 1
    bool m_bWasCreatedInSmoke; // offset 0x10C1, size 0x1, align 1
    char _pad_10C2[0x206]; // offset 0x10C2
    Extent m_extent; // offset 0x12C8, size 0x18, align 255
    CountdownTimer m_damageTimer; // offset 0x12E0, size 0x18, align 8
    CountdownTimer m_damageRampTimer; // offset 0x12F8, size 0x18, align 8
    Vector m_splashVelocity; // offset 0x1310, size 0xC, align 4
    Vector m_InitialSplashVelocity; // offset 0x131C, size 0xC, align 4
    VectorWS m_startPos; // offset 0x1328, size 0xC, align 4
    VectorWS m_vecOriginalSpawnLocation; // offset 0x1334, size 0xC, align 4
    IntervalTimer m_activeTimer; // offset 0x1340, size 0x10, align 8
    int32 m_fireSpawnOffset; // offset 0x1350, size 0x4, align 4
    int32 m_nMaxFlames; // offset 0x1354, size 0x4, align 4
    int32 m_nSpreadCount; // offset 0x1358, size 0x4, align 4
    char _pad_135C[0x4]; // offset 0x135C
    CountdownTimer m_BookkeepingTimer; // offset 0x1360, size 0x18, align 8
    CountdownTimer m_NextSpreadTimer; // offset 0x1378, size 0x18, align 8
    uint16 m_nSourceItemDefIndex; // offset 0x1390, size 0x2, align 2
    char _pad_1392[0x66]; // offset 0x1392
};
