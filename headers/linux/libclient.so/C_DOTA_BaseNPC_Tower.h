#pragma once

class C_DOTA_BaseNPC_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1D18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1CAC]; // offset 0x0
    ParticleIndex_t m_nAltHeldRangeFX; // offset 0x1CAC, size 0x4, align 255
    bool m_bWasInRange; // offset 0x1CB0, size 0x1, align 1
    char _pad_1CB1[0x3]; // offset 0x1CB1
    ParticleIndex_t m_iRangeFX; // offset 0x1CB4, size 0x4, align 255
    ParticleIndex_t m_iPulseFX; // offset 0x1CB8, size 0x4, align 255
    uint8 m_unTowerTier; // offset 0x1CBC, size 0x1, align 1
    char _pad_1CBD[0x3]; // offset 0x1CBD
    float32 m_fTowerAggroDangerAmount; // offset 0x1CC0, size 0x4, align 4
    float32 m_flControlledUnitInRangeAmount; // offset 0x1CC4, size 0x4, align 4
    float32 m_flControlledUnitTargettedAmount; // offset 0x1CC8, size 0x4, align 4
    ParticleIndex_t m_iAnticipationFX; // offset 0x1CCC, size 0x4, align 255
    CUtlSymbolLarge m_szAnticipationFXName; // offset 0x1CD0, size 0x8, align 8
    CHandle< C_BaseEntity > m_hPrevTowerAttackTarget; // offset 0x1CD8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerAttackTarget; // offset 0x1CDC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerHighFiveTarget; // offset 0x1CE0, size 0x4, align 4
    int32 m_iPoseParameterAim; // offset 0x1CE4, size 0x4, align 4
    QAngle m_angDefaultCustomTowerAngle; // offset 0x1CE8, size 0xC, align 4
    float32 m_flLastAimYaw; // offset 0x1CF4, size 0x4, align 4
    bool m_bClientSideCustomTower; // offset 0x1CF8, size 0x1, align 1
    char _pad_1CF9[0x7]; // offset 0x1CF9
    CountdownTimer m_IdleRareAnimationTime; // offset 0x1D00, size 0x18, align 8
};
