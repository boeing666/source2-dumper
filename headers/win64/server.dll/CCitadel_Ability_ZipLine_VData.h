#pragma once

class CCitadel_Ability_ZipLine_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1D70, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flZiplineAirDrag; // offset 0x13A0, size 0x4, align 4 | MPropertyDescription
    float32 m_flZiplineAirDragBoosted; // offset 0x13A4, size 0x4, align 4
    float32 m_flMinButtonHoldTimeToActivate; // offset 0x13A8, size 0x4, align 4
    float32 m_flRestrictedLookTolerance; // offset 0x13AC, size 0x4, align 4
    float32 m_flCrouchDropSpeedFraction; // offset 0x13B0, size 0x4, align 4
    float32 m_flCrouchDropAirDragSuppressDuration; // offset 0x13B4, size 0x4, align 4
    float32 m_flDetachDisallowedTime; // offset 0x13B8, size 0x4, align 4
    float32 m_flCameraWobbleIntensity; // offset 0x13BC, size 0x4, align 4
    float32 m_flDismountSpeedMax; // offset 0x13C0, size 0x4, align 4
    float32 m_flDismountSpeedMaxBrawl; // offset 0x13C4, size 0x4, align 4
    float32 m_flZiplineKnockdownUpImpulse; // offset 0x13C8, size 0x4, align 4
    float32 m_flZiplineIntroDuration; // offset 0x13CC, size 0x4, align 4
    DOFDesc_t m_DOFWhileZiplining; // offset 0x13D0, size 0x10, align 4 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLinePreviewParticle; // offset 0x13E0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSpeedParticle; // offset 0x14C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherParticle; // offset 0x15A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherAttachParticle; // offset 0x1680, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherStartParticle; // offset 0x1760, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // offset 0x1840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // offset 0x1920, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // offset 0x1A00, size 0xE0, align 8
    CSoundEventName m_strZipLineSummonSound; // offset 0x1AE0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strZipLineStartSound; // offset 0x1AF0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RidingZipLineModifier; // offset 0x1B00, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_KnockedOffSlowModifier; // offset 0x1B10, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineIntroModifier; // offset 0x1B20, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineKnockdownImmuneModifier; // offset 0x1B30, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineSlowModifier; // offset 0x1B40, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // offset 0x1B50, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // offset 0x1BD8, size 0x88, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // offset 0x1C60, size 0x88, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceClear; // offset 0x1CE8, size 0x88, align 8
};
