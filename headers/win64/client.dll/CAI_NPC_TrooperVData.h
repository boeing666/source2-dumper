#pragma once

class CAI_NPC_TrooperVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x1528, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    TrooperType_t m_TrooperType; // offset 0xC30, size 0x4, align 4
    float32 m_flNearDeathDuration; // offset 0xC34, size 0x4, align 4
    float32 m_flFlySpeed; // offset 0xC38, size 0x4, align 4
    float32 m_flFlyHeight; // offset 0xC3C, size 0x4, align 4
    float32 m_flMeleeDamage; // offset 0xC40, size 0x4, align 4
    float32 m_flMeleeDuration; // offset 0xC44, size 0x4, align 4
    float32 m_flMeleeHitTime; // offset 0xC48, size 0x4, align 4
    float32 m_flMeleeChargeRange; // offset 0xC4C, size 0x4, align 4
    float32 m_flDPSPctGrowthPerMinute; // offset 0xC50, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0C54[0x4]; // offset 0xC54
    CGlobalSymbol m_BossWeaponName; // offset 0xC58, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    TrooperVsConfig_t m_VSPlayer; // offset 0xC60, size 0x14, align 4 | MPropertyStartGroup
    TrooperVsConfig_t m_VSTrooper; // offset 0xC74, size 0x14, align 4
    TrooperVsConfig_t m_VSGuardian; // offset 0xC88, size 0x14, align 4
    TrooperVsConfig_t m_VSWalker; // offset 0xC9C, size 0x14, align 4
    TrooperVsConfig_t m_VSWatcher; // offset 0xCB0, size 0x14, align 4
    TrooperVsConfig_t m_VSShrine; // offset 0xCC4, size 0x14, align 4
    TrooperVsConfig_t m_VSPatron; // offset 0xCD8, size 0x14, align 4
    TrooperVsConfig_t m_VSPatronPhase2; // offset 0xCEC, size 0x14, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BossAttackParticle; // offset 0xD00, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LastHitParticle; // offset 0xDE0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingLaserParticle; // offset 0xEC0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingEyeFlashParticle; // offset 0xFA0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromDamageParticle; // offset 0x1080, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromLandingParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MedicHealActiveParticle; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeadHealthChangeAmberParticle; // offset 0x1320, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HeadHealthChangeSapphireParticle; // offset 0x1400, size 0xE0, align 8
    CSoundEventName m_sPlayerLastHitSound; // offset 0x14E0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sZiplineContainerBreakSound; // offset 0x14F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ShrinesDownBuffModifier; // offset 0x1500, size 0x10, align 8 | MPropertyStartGroup
    char _pad_1510[0x18]; // offset 0x1510
};
