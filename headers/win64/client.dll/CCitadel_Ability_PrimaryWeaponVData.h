#pragma once

class CCitadel_Ability_PrimaryWeaponVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1658, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    DOFDesc_t m_DOFWhileZoomed; // offset 0x13A0, size 0x10, align 4 | MPropertyDescription
    bool m_bDOFFarSettingsAreOffsetByGunRange; // offset 0x13B0, size 0x1, align 1 | MPropertyDescription
    char _pad_13B1[0x7]; // offset 0x13B1
    CSoundEventName m_sDisarmedSound; // offset 0x13B8, size 0x10, align 8 | MPropertyStartGroup MPropertyFriendlyName
    float32 m_flMinDisarmedSoundInterval; // offset 0x13C8, size 0x4, align 4
    char _pad_13CC[0x4]; // offset 0x13CC
    CSoundEventName m_sObstructedShotSound; // offset 0x13D0, size 0x10, align 8
    CUtlOrderedMap< ENextAttackDelayReason_t, CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > > m_mapDelayLoopsSounds; // offset 0x13E0, size 0x28, align 8
    float32 m_flActionReloadTimingStart; // offset 0x1408, size 0x4, align 4 | MPropertyStartGroup MPropertyAttributeRange MPropertyDescription
    float32 m_flActionReloadTimingDuration; // offset 0x140C, size 0x4, align 4 | MPropertyDescription
    CUtlString m_strCrosshairCSSClass; // offset 0x1410, size 0x8, align 8 | MPropertyStartGroup
    bool m_bUseCustomCrosshairSettings; // offset 0x1418, size 0x1, align 1
    char _pad_1419[0x3]; // offset 0x1419
    CustomCrosshairSettings_t m_CustomCrosshairSettings; // offset 0x141C, size 0x44, align 4 | MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PassiveWeaponParticle; // offset 0x1460, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_strPassiveWeaponAttachmentSource; // offset 0x1540, size 0x8, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceZoom; // offset 0x1548, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceUnZoom; // offset 0x15D0, size 0x88, align 8
};
