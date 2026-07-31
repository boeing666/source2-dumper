#pragma once

class C_DOTA_BaseNPC_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    ParticleIndex_t m_nAltHeldRangeFX; // offset 0x1A28, size 0x4, align 255
    bool m_bWasInRange; // offset 0x1A2C, size 0x1, align 1
    char _pad_1A2D[0x3]; // offset 0x1A2D
    ParticleIndex_t m_iRangeFX; // offset 0x1A30, size 0x4, align 255
    ParticleIndex_t m_iPulseFX; // offset 0x1A34, size 0x4, align 255
    uint8 m_unTowerTier; // offset 0x1A38, size 0x1, align 1
    char _pad_1A39[0x3]; // offset 0x1A39
    float32 m_fTowerAggroDangerAmount; // offset 0x1A3C, size 0x4, align 4
    float32 m_flControlledUnitInRangeAmount; // offset 0x1A40, size 0x4, align 4
    float32 m_flControlledUnitTargettedAmount; // offset 0x1A44, size 0x4, align 4
    ParticleIndex_t m_iAnticipationFX; // offset 0x1A48, size 0x4, align 255
    char _pad_1A4C[0x4]; // offset 0x1A4C
    CUtlSymbolLarge m_szAnticipationFXName; // offset 0x1A50, size 0x8, align 8
    CHandle< C_BaseEntity > m_hPrevTowerAttackTarget; // offset 0x1A58, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerAttackTarget; // offset 0x1A5C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerHighFiveTarget; // offset 0x1A60, size 0x4, align 4
    int32 m_iPoseParameterAim; // offset 0x1A64, size 0x4, align 4
    QAngle m_angDefaultCustomTowerAngle; // offset 0x1A68, size 0xC, align 4
    float32 m_flLastAimYaw; // offset 0x1A74, size 0x4, align 4
    bool m_bClientSideCustomTower; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x7]; // offset 0x1A79
    CountdownTimer m_IdleRareAnimationTime; // offset 0x1A80, size 0x18, align 8
};
