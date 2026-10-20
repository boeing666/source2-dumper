#pragma once

class CCitadel_Ability_PrimaryWeaponVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1360, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1078]; // offset 0x0
    DOFDesc_t m_DOFWhileZoomed; // offset 0x1078, size 0x10, align 4 | MPropertyDescription
    bool m_bDOFFarSettingsAreOffsetByGunRange; // offset 0x1088, size 0x1, align 1 | MPropertyDescription
    char _pad_1089[0x7]; // offset 0x1089
    CSoundEventName m_sDisarmedSound; // offset 0x1090, size 0x10, align 8 | MPropertyStartGroup MPropertyFriendlyName
    float32 m_flMinDisarmedSoundInterval; // offset 0x10A0, size 0x4, align 4
    char _pad_10A4[0x4]; // offset 0x10A4
    CSoundEventName m_sObstructedShotSound; // offset 0x10A8, size 0x10, align 8
    CUtlOrderedMap< ENextAttackDelayReason_t, CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > > m_mapDelayLoopsSounds; // offset 0x10B8, size 0x28, align 8
    float32 m_flActionReloadTimingStart; // offset 0x10E0, size 0x4, align 4 | MPropertyStartGroup MPropertyAttributeRange MPropertyDescription
    float32 m_flActionReloadTimingDuration; // offset 0x10E4, size 0x4, align 4 | MPropertyDescription
    CUtlString m_strCrosshairCSSClass; // offset 0x10E8, size 0x8, align 8 | MPropertyStartGroup
    bool m_bCustomCrossIgnoreThemedReticleSetting; // offset 0x10F0, size 0x1, align 1
    bool m_bUseCustomCrosshairSettings; // offset 0x10F1, size 0x1, align 1
    char _pad_10F2[0x2]; // offset 0x10F2
    CustomCrosshairSettings_t m_CustomCrosshairSettings; // offset 0x10F4, size 0x44, align 4 | MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PassiveWeaponParticle; // offset 0x1138, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_strPassiveWeaponAttachmentSource; // offset 0x1218, size 0x8, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceZoom; // offset 0x1220, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceUnZoom; // offset 0x12C0, size 0xA0, align 8
};
