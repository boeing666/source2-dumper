#pragma once

class C_DOTA_BaseNPC_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A20]; // offset 0x0
    ParticleIndex_t m_nAltHeldRangeFX; // offset 0x1A20, size 0x4, align 255
    bool m_bWasInRange; // offset 0x1A24, size 0x1, align 1
    char _pad_1A25[0x3]; // offset 0x1A25
    ParticleIndex_t m_iRangeFX; // offset 0x1A28, size 0x4, align 255
    ParticleIndex_t m_iPulseFX; // offset 0x1A2C, size 0x4, align 255
    uint8 m_unTowerTier; // offset 0x1A30, size 0x1, align 1
    char _pad_1A31[0x3]; // offset 0x1A31
    float32 m_fTowerAggroDangerAmount; // offset 0x1A34, size 0x4, align 4
    float32 m_flControlledUnitInRangeAmount; // offset 0x1A38, size 0x4, align 4
    float32 m_flControlledUnitTargettedAmount; // offset 0x1A3C, size 0x4, align 4
    ParticleIndex_t m_iAnticipationFX; // offset 0x1A40, size 0x4, align 255
    char _pad_1A44[0x4]; // offset 0x1A44
    CUtlSymbolLarge m_szAnticipationFXName; // offset 0x1A48, size 0x8, align 8
    CHandle< C_BaseEntity > m_hPrevTowerAttackTarget; // offset 0x1A50, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerAttackTarget; // offset 0x1A54, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerHighFiveTarget; // offset 0x1A58, size 0x4, align 4
    int32 m_iPoseParameterAim; // offset 0x1A5C, size 0x4, align 4
    QAngle m_angDefaultCustomTowerAngle; // offset 0x1A60, size 0xC, align 4
    float32 m_flLastAimYaw; // offset 0x1A6C, size 0x4, align 4
    bool m_bClientSideCustomTower; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x7]; // offset 0x1A71
    CountdownTimer m_IdleRareAnimationTime; // offset 0x1A78, size 0x18, align 8
};
