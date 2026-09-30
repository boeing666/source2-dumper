#pragma once

class CAbility_Fencer_Lunge_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C80, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashTrailEffect; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwordChargeEffect; // offset 0x1640, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashSwingEffect; // offset 0x1720, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StackProcParticle; // offset 0x1800, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GlintParticle; // offset 0x18E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PerfectImpactParticle; // offset 0x19C0, size 0xE0, align 8
    Vector m_vecLongEffectOffset; // offset 0x1AA0, size 0xC, align 4 | MPropertyDescription
    float32 m_vecPlayerLeftOffset; // offset 0x1AAC, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_DashBuffModifier; // offset 0x1AB0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_UIRecastModifier; // offset 0x1AC0, size 0x10, align 8
    float32 m_flAirSpeedMax; // offset 0x1AD0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x1AD4, size 0x4, align 4
    float32 m_flFallSpeedMax; // offset 0x1AD8, size 0x4, align 4
    float32 m_flDashTurnRateMax; // offset 0x1ADC, size 0x4, align 4
    float32 m_flMaxPowerPadding; // offset 0x1AE0, size 0x4, align 4
    float32 m_flEffectGroundTrace; // offset 0x1AE4, size 0x4, align 4
    float32 m_flWhizbyMaxRange; // offset 0x1AE8, size 0x4, align 4
    float32 m_flStartPosTestCapsuleLength; // offset 0x1AEC, size 0x4, align 4
    float32 m_flCoverLOSBackDist; // offset 0x1AF0, size 0x4, align 4
    float32 m_flAttackDuration; // offset 0x1AF4, size 0x4, align 4
    float32 m_flPostAttackDuration; // offset 0x1AF8, size 0x4, align 4
    float32 m_flMinGlintTime; // offset 0x1AFC, size 0x4, align 4
    CSoundEventName m_strDashStart; // offset 0x1B00, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlashStart; // offset 0x1B10, size 0x10, align 8
    CSoundEventName m_strSlashImpactSound; // offset 0x1B20, size 0x10, align 8
    CSoundEventName m_strChargeSound; // offset 0x1B30, size 0x10, align 8
    CSoundEventName m_strChargeGlintSound; // offset 0x1B40, size 0x10, align 8
    CSoundEventName m_strMaxHoldSweetener; // offset 0x1B50, size 0x10, align 8
    CSoundEventName m_strPerfectDamageHitSound; // offset 0x1B60, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequencePreRelease; // offset 0x1B70, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // offset 0x1BF8, size 0x88, align 8
};
