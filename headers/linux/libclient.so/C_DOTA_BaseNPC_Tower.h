#pragma once

class C_DOTA_BaseNPC_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1DA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D3C]; // offset 0x0
    ParticleIndex_t m_nAltHeldRangeFX; // offset 0x1D3C, size 0x4, align 255
    bool m_bWasInRange; // offset 0x1D40, size 0x1, align 1
    char _pad_1D41[0x3]; // offset 0x1D41
    ParticleIndex_t m_iRangeFX; // offset 0x1D44, size 0x4, align 255
    ParticleIndex_t m_iPulseFX; // offset 0x1D48, size 0x4, align 255
    uint8 m_unTowerTier; // offset 0x1D4C, size 0x1, align 1
    char _pad_1D4D[0x3]; // offset 0x1D4D
    float32 m_fTowerAggroDangerAmount; // offset 0x1D50, size 0x4, align 4
    float32 m_flControlledUnitInRangeAmount; // offset 0x1D54, size 0x4, align 4
    float32 m_flControlledUnitTargettedAmount; // offset 0x1D58, size 0x4, align 4
    ParticleIndex_t m_iAnticipationFX; // offset 0x1D5C, size 0x4, align 255
    CUtlSymbolLarge m_szAnticipationFXName; // offset 0x1D60, size 0x8, align 8
    CHandle< C_BaseEntity > m_hPrevTowerAttackTarget; // offset 0x1D68, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerAttackTarget; // offset 0x1D6C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerHighFiveTarget; // offset 0x1D70, size 0x4, align 4
    int32 m_iPoseParameterAim; // offset 0x1D74, size 0x4, align 4
    QAngle m_angDefaultCustomTowerAngle; // offset 0x1D78, size 0xC, align 4
    float32 m_flLastAimYaw; // offset 0x1D84, size 0x4, align 4
    bool m_bClientSideCustomTower; // offset 0x1D88, size 0x1, align 1
    char _pad_1D89[0x7]; // offset 0x1D89
    CountdownTimer m_IdleRareAnimationTime; // offset 0x1D90, size 0x18, align 8
};
