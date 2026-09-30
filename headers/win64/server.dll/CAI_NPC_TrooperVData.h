#pragma once

class CAI_NPC_TrooperVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x1548, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    TrooperType_t m_TrooperType; // offset 0xC50, size 0x4, align 4
    float32 m_flNearDeathDuration; // offset 0xC54, size 0x4, align 4
    float32 m_flFlySpeed; // offset 0xC58, size 0x4, align 4
    float32 m_flFlyHeight; // offset 0xC5C, size 0x4, align 4
    float32 m_flMeleeDamage; // offset 0xC60, size 0x4, align 4
    float32 m_flMeleeDuration; // offset 0xC64, size 0x4, align 4
    float32 m_flMeleeHitTime; // offset 0xC68, size 0x4, align 4
    float32 m_flMeleeChargeRange; // offset 0xC6C, size 0x4, align 4
    float32 m_flDPSPctGrowthPerMinute; // offset 0xC70, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0C74[0x4]; // offset 0xC74
    CGlobalSymbol m_BossWeaponName; // offset 0xC78, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    TrooperVsConfig_t m_VSPlayer; // offset 0xC80, size 0x14, align 4 | MPropertyStartGroup
    TrooperVsConfig_t m_VSTrooper; // offset 0xC94, size 0x14, align 4
    TrooperVsConfig_t m_VSGuardian; // offset 0xCA8, size 0x14, align 4
    TrooperVsConfig_t m_VSWalker; // offset 0xCBC, size 0x14, align 4
    TrooperVsConfig_t m_VSWatcher; // offset 0xCD0, size 0x14, align 4
    TrooperVsConfig_t m_VSShrine; // offset 0xCE4, size 0x14, align 4
    TrooperVsConfig_t m_VSPatron; // offset 0xCF8, size 0x14, align 4
    TrooperVsConfig_t m_VSPatronPhase2; // offset 0xD0C, size 0x14, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BossAttackParticle; // offset 0xD20, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LastHitParticle; // offset 0xE00, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingLaserParticle; // offset 0xEE0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingEyeFlashParticle; // offset 0xFC0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromDamageParticle; // offset 0x10A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromLandingParticle; // offset 0x1180, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MedicHealActiveParticle; // offset 0x1260, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeadHealthChangeAmberParticle; // offset 0x1340, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeadHealthChangeSapphireParticle; // offset 0x1420, size 0xE0, align 8
    CSoundEventName m_sPlayerLastHitSound; // offset 0x1500, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sZiplineContainerBreakSound; // offset 0x1510, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ShrinesDownBuffModifier; // offset 0x1520, size 0x10, align 8 | MPropertyStartGroup
    char _pad_1530[0x18]; // offset 0x1530
};
