#pragma once

class CAbility_Fencer_Lunge_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1980, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashTrailEffect; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwordChargeEffect; // offset 0x1310, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // offset 0x13F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackProcParticle; // offset 0x14D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GlintParticle; // offset 0x15B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PerfectImpactParticle; // offset 0x1690, size 0xE0, align 8
    Vector m_vecLongEffectOffset; // offset 0x1770, size 0xC, align 4 | MPropertyDescription
    float32 m_vecPlayerLeftOffset; // offset 0x177C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_DashBuffModifier; // offset 0x1780, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_UIRecastModifier; // offset 0x1790, size 0x10, align 8
    float32 m_flAirSpeedMax; // offset 0x17A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x17A4, size 0x4, align 4
    float32 m_flFallSpeedMax; // offset 0x17A8, size 0x4, align 4
    float32 m_flDashTurnRateMax; // offset 0x17AC, size 0x4, align 4
    float32 m_flMaxPowerPadding; // offset 0x17B0, size 0x4, align 4
    float32 m_flEffectGroundTrace; // offset 0x17B4, size 0x4, align 4
    float32 m_flWhizbyMaxRange; // offset 0x17B8, size 0x4, align 4
    float32 m_flStartPosTestCapsuleLength; // offset 0x17BC, size 0x4, align 4
    float32 m_flCoverLOSBackDist; // offset 0x17C0, size 0x4, align 4
    float32 m_flAttackDuration; // offset 0x17C4, size 0x4, align 4
    float32 m_flPostAttackDuration; // offset 0x17C8, size 0x4, align 4
    float32 m_flMinGlintTime; // offset 0x17CC, size 0x4, align 4
    CSoundEventName m_strDashStart; // offset 0x17D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlashStart; // offset 0x17E0, size 0x10, align 8
    CSoundEventName m_strSlashImpactSound; // offset 0x17F0, size 0x10, align 8
    CSoundEventName m_strChargeSound; // offset 0x1800, size 0x10, align 8
    CSoundEventName m_strChargeGlintSound; // offset 0x1810, size 0x10, align 8
    CSoundEventName m_strMaxHoldSweetener; // offset 0x1820, size 0x10, align 8
    CSoundEventName m_strPerfectDamageHitSound; // offset 0x1830, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequencePreRelease; // offset 0x1840, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // offset 0x18E0, size 0xA0, align 8
};
