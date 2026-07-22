#pragma once

class CCitadel_Ability_ZipLine_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x21E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flZiplineAirDrag; // offset 0x1818, size 0x4, align 4 | MPropertyDescription
    float32 m_flZiplineAirDragBoosted; // offset 0x181C, size 0x4, align 4
    float32 m_flMinButtonHoldTimeToActivate; // offset 0x1820, size 0x4, align 4
    float32 m_flCrouchDropSpeedFraction; // offset 0x1824, size 0x4, align 4
    float32 m_flCrouchDropAirDragSuppressDuration; // offset 0x1828, size 0x4, align 4
    float32 m_flDetachDisallowedTime; // offset 0x182C, size 0x4, align 4
    float32 m_flCameraWobbleIntensity; // offset 0x1830, size 0x4, align 4
    float32 m_flDismountSpeedMax; // offset 0x1834, size 0x4, align 4
    float32 m_flDismountSpeedMaxBrawl; // offset 0x1838, size 0x4, align 4
    float32 m_flZiplineKnockdownUpImpulse; // offset 0x183C, size 0x4, align 4
    float32 m_flZiplineIntroDuration; // offset 0x1840, size 0x4, align 4
    DOFDesc_t m_DOFWhileZiplining; // offset 0x1844, size 0x10, align 4 | MPropertyDescription
    char _pad_1854[0x4]; // offset 0x1854
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLinePreviewParticle; // offset 0x1858, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSpeedParticle; // offset 0x1938, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherParticle; // offset 0x1A18, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherAttachParticle; // offset 0x1AF8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineTetherStartParticle; // offset 0x1BD8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineEnemyKnockdownProtectionParticle; // offset 0x1CB8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineSelfKnockdownProtectionParticle; // offset 0x1D98, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZipLineKnockdownProtectionStatusParticle; // offset 0x1E78, size 0xE0, align 8
    CSoundEventName m_strZipLineSummonSound; // offset 0x1F58, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strZipLineStartSound; // offset 0x1F68, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RidingZipLineModifier; // offset 0x1F78, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_KnockedOffSlowModifier; // offset 0x1F88, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineIntroModifier; // offset 0x1F98, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineKnockdownImmuneModifier; // offset 0x1FA8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ZipLineSlowModifier; // offset 0x1FB8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // offset 0x1FC8, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // offset 0x2050, size 0x88, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // offset 0x20D8, size 0x88, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceClear; // offset 0x2160, size 0x88, align 8
};
