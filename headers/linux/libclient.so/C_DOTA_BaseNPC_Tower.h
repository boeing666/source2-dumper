#pragma once

class C_DOTA_BaseNPC_Tower : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1C18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BAC]; // offset 0x0
    ParticleIndex_t m_nAltHeldRangeFX; // offset 0x1BAC, size 0x4, align 255
    bool m_bWasInRange; // offset 0x1BB0, size 0x1, align 1
    char _pad_1BB1[0x3]; // offset 0x1BB1
    ParticleIndex_t m_iRangeFX; // offset 0x1BB4, size 0x4, align 255
    ParticleIndex_t m_iPulseFX; // offset 0x1BB8, size 0x4, align 255
    uint8 m_unTowerTier; // offset 0x1BBC, size 0x1, align 1
    char _pad_1BBD[0x3]; // offset 0x1BBD
    float32 m_fTowerAggroDangerAmount; // offset 0x1BC0, size 0x4, align 4
    float32 m_flControlledUnitInRangeAmount; // offset 0x1BC4, size 0x4, align 4
    float32 m_flControlledUnitTargettedAmount; // offset 0x1BC8, size 0x4, align 4
    ParticleIndex_t m_iAnticipationFX; // offset 0x1BCC, size 0x4, align 255
    CUtlSymbolLarge m_szAnticipationFXName; // offset 0x1BD0, size 0x8, align 8
    CHandle< C_BaseEntity > m_hPrevTowerAttackTarget; // offset 0x1BD8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerAttackTarget; // offset 0x1BDC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTowerHighFiveTarget; // offset 0x1BE0, size 0x4, align 4
    int32 m_iPoseParameterAim; // offset 0x1BE4, size 0x4, align 4
    QAngle m_angDefaultCustomTowerAngle; // offset 0x1BE8, size 0xC, align 4
    float32 m_flLastAimYaw; // offset 0x1BF4, size 0x4, align 4
    bool m_bClientSideCustomTower; // offset 0x1BF8, size 0x1, align 1
    char _pad_1BF9[0x7]; // offset 0x1BF9
    CountdownTimer m_IdleRareAnimationTime; // offset 0x1C00, size 0x18, align 8
};
