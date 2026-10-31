#pragma once

class CCitadel_Ability_ZipLine_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AB0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_flZiplineAirDrag; // offset 0x1080, size 0x4, align 4 | MPropertyDescription
    float32 m_flZiplineAirDragBoosted; // offset 0x1084, size 0x4, align 4
    float32 m_flMinButtonHoldTimeToActivate; // offset 0x1088, size 0x4, align 4
    float32 m_flRestrictedLookTolerance; // offset 0x108C, size 0x4, align 4
    float32 m_flCrouchDropSpeedFraction; // offset 0x1090, size 0x4, align 4
    float32 m_flCrouchDropAirDragSuppressDuration; // offset 0x1094, size 0x4, align 4
    float32 m_flDetachDisallowedTime; // offset 0x1098, size 0x4, align 4
    float32 m_flCameraWobbleIntensity; // offset 0x109C, size 0x4, align 4
    float32 m_flDismountSpeedMax; // offset 0x10A0, size 0x4, align 4
    float32 m_flDismountSpeedMaxBrawl; // offset 0x10A4, size 0x4, align 4
    float32 m_flZiplineKnockdownUpImpulse; // offset 0x10A8, size 0x4, align 4
    float32 m_flZiplineIntroDuration; // offset 0x10AC, size 0x4, align 4
    DOFDesc_t m_DOFWhileZiplining; // offset 0x10B0, size 0x10, align 4 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLinePreviewParticle; // offset 0x10C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSpeedParticle; // offset 0x11A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherParticle; // offset 0x1280, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherAttachParticle; // offset 0x1360, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherStartParticle; // offset 0x1440, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // offset 0x1520, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // offset 0x1600, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // offset 0x16E0, size 0xE0, align 8
    CSoundEventName m_strZipLineSummonSound; // offset 0x17C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strZipLineStartSound; // offset 0x17D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RidingZipLineModifier; // offset 0x17E0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_KnockedOffSlowModifier; // offset 0x17F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineIntroModifier; // offset 0x1800, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineKnockdownImmuneModifier; // offset 0x1810, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineSlowModifier; // offset 0x1820, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // offset 0x1830, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // offset 0x18D0, size 0xA0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // offset 0x1970, size 0xA0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceClear; // offset 0x1A10, size 0xA0, align 8
};
