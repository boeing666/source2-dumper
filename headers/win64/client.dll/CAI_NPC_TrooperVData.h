#pragma once

class CAI_NPC_TrooperVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x23E0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    TrooperType_t m_TrooperType; // offset 0x1348, size 0x4, align 4
    float32 m_flNearDeathDuration; // offset 0x134C, size 0x4, align 4
    float32 m_flFlySpeed; // offset 0x1350, size 0x4, align 4
    float32 m_flFlyHeight; // offset 0x1354, size 0x4, align 4
    float32 m_flMeleeDamage; // offset 0x1358, size 0x4, align 4
    float32 m_flMeleeDuration; // offset 0x135C, size 0x4, align 4
    float32 m_flMeleeChargeRange; // offset 0x1360, size 0x4, align 4
    float32 m_flHealthBarOffsetDucking; // offset 0x1364, size 0x4, align 4
    TrooperVsConfig_t m_VSPlayer; // offset 0x1368, size 0x14, align 4 | MPropertyStartGroup
    TrooperVsConfig_t m_VSTrooper; // offset 0x137C, size 0x14, align 4
    TrooperVsConfig_t m_VSGuardian; // offset 0x1390, size 0x14, align 4
    TrooperVsConfig_t m_VSWalker; // offset 0x13A4, size 0x14, align 4
    TrooperVsConfig_t m_VSWatcher; // offset 0x13B8, size 0x14, align 4
    TrooperVsConfig_t m_VSShrine; // offset 0x13CC, size 0x14, align 4
    TrooperVsConfig_t m_VSPatron; // offset 0x13E0, size 0x14, align 4
    TrooperVsConfig_t m_VSPatronPhase2; // offset 0x13F4, size 0x14, align 4
    float32 m_flDPSPctGrowthPerMinute; // offset 0x1408, size 0x4, align 4
    bool m_bBossWeaponEnabled; // offset 0x140C, size 0x1, align 1
    char _pad_140D[0x3]; // offset 0x140D
    CCitadelWeaponInfo m_BossWeapon; // offset 0x1410, size 0x778, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BossAttackParticle; // offset 0x1B88, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LastHitParticle; // offset 0x1C68, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingLaserParticle; // offset 0x1D48, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingEyeFlashParticle; // offset 0x1E28, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromDamageParticle; // offset 0x1F08, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromLandingParticle; // offset 0x1FE8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MedicHealActiveParticle; // offset 0x20C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeadHealthChangeAmberParticle; // offset 0x21A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeadHealthChangeSapphireParticle; // offset 0x2288, size 0xE0, align 8
    CSoundEventName m_sPlayerLastHitSound; // offset 0x2368, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sCelebrationSound; // offset 0x2378, size 0x10, align 8
    CSoundEventName m_sZiplineContainerBreakSound; // offset 0x2388, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NearDeathModifier; // offset 0x2398, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ShrinesDownBuffModifier; // offset 0x23A8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NpcOutOfCombatRegenModifier; // offset 0x23B8, size 0x10, align 8
    char _pad_23C8[0x18]; // offset 0x23C8
};
