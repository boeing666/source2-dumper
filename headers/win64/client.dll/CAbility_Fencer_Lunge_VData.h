#pragma once

class CAbility_Fencer_Lunge_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1CF8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashTrailEffect; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwordChargeEffect; // offset 0x1688, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // offset 0x1768, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackProcParticle; // offset 0x1848, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GlintParticle; // offset 0x1928, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PerfectImpactParticle; // offset 0x1A08, size 0xE0, align 8
    Vector m_vecLongEffectOffset; // offset 0x1AE8, size 0xC, align 4 | MPropertyDescription
    float32 m_vecPlayerLeftOffset; // offset 0x1AF4, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_DashBuffModifier; // offset 0x1AF8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_UIRecastModifier; // offset 0x1B08, size 0x10, align 8
    float32 m_flAirSpeedMax; // offset 0x1B18, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x1B1C, size 0x4, align 4
    float32 m_flFallSpeedMax; // offset 0x1B20, size 0x4, align 4
    float32 m_flDashTurnRateMax; // offset 0x1B24, size 0x4, align 4
    float32 m_flMaxPowerPadding; // offset 0x1B28, size 0x4, align 4
    float32 m_flEffectGroundTrace; // offset 0x1B2C, size 0x4, align 4
    float32 m_flWhizbyMaxRange; // offset 0x1B30, size 0x4, align 4
    float32 m_flStartPosTestCapsuleLength; // offset 0x1B34, size 0x4, align 4
    float32 m_flCoverLOSBackDist; // offset 0x1B38, size 0x4, align 4
    float32 m_flAttackDuration; // offset 0x1B3C, size 0x4, align 4
    float32 m_flPostAttackDuration; // offset 0x1B40, size 0x4, align 4
    float32 m_flMinGlintTime; // offset 0x1B44, size 0x4, align 4
    CSoundEventName m_strDashStart; // offset 0x1B48, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlashStart; // offset 0x1B58, size 0x10, align 8
    CSoundEventName m_strSlashImpactSound; // offset 0x1B68, size 0x10, align 8
    CSoundEventName m_strChargeSound; // offset 0x1B78, size 0x10, align 8
    CSoundEventName m_strChargeGlintSound; // offset 0x1B88, size 0x10, align 8
    CSoundEventName m_strMaxHoldSweetener; // offset 0x1B98, size 0x10, align 8
    CSoundEventName m_strPerfectDamageHitSound; // offset 0x1BA8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequencePreRelease; // offset 0x1BB8, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // offset 0x1C58, size 0xA0, align 8
};
