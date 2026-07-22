#pragma once

class CSurvivorsPowerUp  // sizeof 0x608, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x18]; // offset 0x0
    SurvivorsPowerUpID_t m_unPowerUpID; // offset 0x18, size 0x4, align 255
    int32 m_nLevel; // offset 0x1C, size 0x4, align 4
    int32 m_nMaxLevel; // offset 0x20, size 0x4, align 4
    int32 m_nNumAuthoredLevels; // offset 0x24, size 0x4, align 4
    CUtlVector< CSurvivorsUpgradeDefinition > m_vecMinorUpgrades; // offset 0x28, size 0x18, align 8
    bool m_bHasShardUpgrade; // offset 0x40, size 0x1, align 1
    bool m_bHasScepterUpgrade; // offset 0x41, size 0x1, align 1
    char _pad_0042[0x2]; // offset 0x42
    float32 m_flElapsedTime; // offset 0x44, size 0x4, align 4
    float32 m_flTimeUntilNextTrigger; // offset 0x48, size 0x4, align 4
    bool m_bHasTriggered; // offset 0x4C, size 0x1, align 1
    bool m_bIsPassive; // offset 0x4D, size 0x1, align 1
    bool m_bIsProjectile; // offset 0x4E, size 0x1, align 1
    bool m_bIsInnate; // offset 0x4F, size 0x1, align 1
    bool m_bModifierParticleUsesOverheadOffset; // offset 0x50, size 0x1, align 1
    char _pad_0051[0x7]; // offset 0x51
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sModifierParticle; // offset 0x58, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sStunParticle; // offset 0x138, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sVulnerableParticle; // offset 0x218, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sFreezeParticle; // offset 0x2F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sHitStatusEffectParticle; // offset 0x3D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sWarmupEffectParticle; // offset 0x4B8, size 0xE0, align 8
    float32 m_flWarmupEffectTime; // offset 0x598, size 0x4, align 4
    float32 m_flSpawnPickupOnKillPercent; // offset 0x59C, size 0x4, align 4
    SurvivorsPickupID_t m_unSpawnPickupOnKillID; // offset 0x5A0, size 0x4, align 255
    char _pad_05A4[0x64]; // offset 0x5A4
};
