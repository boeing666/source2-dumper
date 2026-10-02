#pragma once

class CCitadel_Ability_ZipLine_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1E18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flZiplineAirDrag; // offset 0x13E8, size 0x4, align 4 | MPropertyDescription
    float32 m_flZiplineAirDragBoosted; // offset 0x13EC, size 0x4, align 4
    float32 m_flMinButtonHoldTimeToActivate; // offset 0x13F0, size 0x4, align 4
    float32 m_flRestrictedLookTolerance; // offset 0x13F4, size 0x4, align 4
    float32 m_flCrouchDropSpeedFraction; // offset 0x13F8, size 0x4, align 4
    float32 m_flCrouchDropAirDragSuppressDuration; // offset 0x13FC, size 0x4, align 4
    float32 m_flDetachDisallowedTime; // offset 0x1400, size 0x4, align 4
    float32 m_flCameraWobbleIntensity; // offset 0x1404, size 0x4, align 4
    float32 m_flDismountSpeedMax; // offset 0x1408, size 0x4, align 4
    float32 m_flDismountSpeedMaxBrawl; // offset 0x140C, size 0x4, align 4
    float32 m_flZiplineKnockdownUpImpulse; // offset 0x1410, size 0x4, align 4
    float32 m_flZiplineIntroDuration; // offset 0x1414, size 0x4, align 4
    DOFDesc_t m_DOFWhileZiplining; // offset 0x1418, size 0x10, align 4 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLinePreviewParticle; // offset 0x1428, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSpeedParticle; // offset 0x1508, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherParticle; // offset 0x15E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherAttachParticle; // offset 0x16C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherStartParticle; // offset 0x17A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // offset 0x1888, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // offset 0x1968, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // offset 0x1A48, size 0xE0, align 8
    CSoundEventName m_strZipLineSummonSound; // offset 0x1B28, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strZipLineStartSound; // offset 0x1B38, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RidingZipLineModifier; // offset 0x1B48, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_KnockedOffSlowModifier; // offset 0x1B58, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineIntroModifier; // offset 0x1B68, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineKnockdownImmuneModifier; // offset 0x1B78, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineSlowModifier; // offset 0x1B88, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // offset 0x1B98, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // offset 0x1C38, size 0xA0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // offset 0x1CD8, size 0xA0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceClear; // offset 0x1D78, size 0xA0, align 8
};
