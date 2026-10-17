#pragma once

class C_DOTA_BaseNPC_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1B98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B28]; // offset 0x0
    ParticleIndex_t m_nAltHeldRangeFX; // offset 0x1B28, size 0x4, align 255
    bool m_bWasInRange; // offset 0x1B2C, size 0x1, align 1
    char _pad_1B2D[0x3]; // offset 0x1B2D
    ParticleIndex_t m_iRangeFX; // offset 0x1B30, size 0x4, align 255
    ParticleIndex_t m_iPulseFX; // offset 0x1B34, size 0x4, align 255
    uint8 m_unTowerTier; // offset 0x1B38, size 0x1, align 1
    char _pad_1B39[0x3]; // offset 0x1B39
    float32 m_fTowerAggroDangerAmount; // offset 0x1B3C, size 0x4, align 4
    float32 m_flControlledUnitInRangeAmount; // offset 0x1B40, size 0x4, align 4
    float32 m_flControlledUnitTargettedAmount; // offset 0x1B44, size 0x4, align 4
    ParticleIndex_t m_iAnticipationFX; // offset 0x1B48, size 0x4, align 255
    char _pad_1B4C[0x4]; // offset 0x1B4C
    CUtlSymbolLarge m_szAnticipationFXName; // offset 0x1B50, size 0x8, align 8
    CHandle< C_BaseEntity > m_hPrevTowerAttackTarget; // offset 0x1B58, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerAttackTarget; // offset 0x1B5C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerHighFiveTarget; // offset 0x1B60, size 0x4, align 4
    int32 m_iPoseParameterAim; // offset 0x1B64, size 0x4, align 4
    QAngle m_angDefaultCustomTowerAngle; // offset 0x1B68, size 0xC, align 4
    float32 m_flLastAimYaw; // offset 0x1B74, size 0x4, align 4
    bool m_bClientSideCustomTower; // offset 0x1B78, size 0x1, align 1
    char _pad_1B79[0x7]; // offset 0x1B79
    CountdownTimer m_IdleRareAnimationTime; // offset 0x1B80, size 0x18, align 8
};
