#pragma once

class CAbility_Fencer_Lunge_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x20E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashTrailEffect; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwordChargeEffect; // offset 0x1AB8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // offset 0x1B98, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackProcParticle; // offset 0x1C78, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GlintParticle; // offset 0x1D58, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PerfectImpactParticle; // offset 0x1E38, size 0xE0, align 8
    Vector m_vecLongEffectOffset; // offset 0x1F18, size 0xC, align 4 | MPropertyDescription
    float32 m_vecPlayerLeftOffset; // offset 0x1F24, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_DashBuffModifier; // offset 0x1F28, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flAirSpeedMax; // offset 0x1F38, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x1F3C, size 0x4, align 4
    float32 m_flFallSpeedMax; // offset 0x1F40, size 0x4, align 4
    float32 m_flDashTurnRateMax; // offset 0x1F44, size 0x4, align 4
    float32 m_flMaxPowerPadding; // offset 0x1F48, size 0x4, align 4
    float32 m_flEffectGroundTrace; // offset 0x1F4C, size 0x4, align 4
    float32 m_flWhizbyMaxRange; // offset 0x1F50, size 0x4, align 4
    float32 m_flStartPosTestCapsuleLength; // offset 0x1F54, size 0x4, align 4
    float32 m_flCoverLOSBackDist; // offset 0x1F58, size 0x4, align 4
    float32 m_flAttackDuration; // offset 0x1F5C, size 0x4, align 4
    float32 m_flPostAttackDuration; // offset 0x1F60, size 0x4, align 4
    float32 m_flMinGlintTime; // offset 0x1F64, size 0x4, align 4
    CSoundEventName m_strDashStart; // offset 0x1F68, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlashStart; // offset 0x1F78, size 0x10, align 8
    CSoundEventName m_strSlashImpactSound; // offset 0x1F88, size 0x10, align 8
    CSoundEventName m_strChargeSound; // offset 0x1F98, size 0x10, align 8
    CSoundEventName m_strChargeGlintSound; // offset 0x1FA8, size 0x10, align 8
    CSoundEventName m_strMaxHoldSweetener; // offset 0x1FB8, size 0x10, align 8
    CSoundEventName m_strPerfectDamageHitSound; // offset 0x1FC8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequencePreRelease; // offset 0x1FD8, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // offset 0x2060, size 0x88, align 8
};
