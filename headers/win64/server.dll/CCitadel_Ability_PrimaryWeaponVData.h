#pragma once

class CCitadel_Ability_PrimaryWeaponVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16D8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13F0]; // offset 0x0
    DOFDesc_t m_DOFWhileZoomed; // offset 0x13F0, size 0x10, align 4 | MPropertyDescription
    bool m_bDOFFarSettingsAreOffsetByGunRange; // offset 0x1400, size 0x1, align 1 | MPropertyDescription
    char _pad_1401[0x7]; // offset 0x1401
    CSoundEventName m_sDisarmedSound; // offset 0x1408, size 0x10, align 8 | MPropertyStartGroup MPropertyFriendlyName
    float32 m_flMinDisarmedSoundInterval; // offset 0x1418, size 0x4, align 4
    char _pad_141C[0x4]; // offset 0x141C
    CSoundEventName m_sObstructedShotSound; // offset 0x1420, size 0x10, align 8
    CUtlOrderedMap< ENextAttackDelayReason_t, CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > > m_mapDelayLoopsSounds; // offset 0x1430, size 0x28, align 8
    float32 m_flActionReloadTimingStart; // offset 0x1458, size 0x4, align 4 | MPropertyStartGroup MPropertyAttributeRange MPropertyDescription
    float32 m_flActionReloadTimingDuration; // offset 0x145C, size 0x4, align 4 | MPropertyDescription
    CUtlString m_strCrosshairCSSClass; // offset 0x1460, size 0x8, align 8 | MPropertyStartGroup
    bool m_bUseCustomCrosshairSettings; // offset 0x1468, size 0x1, align 1
    char _pad_1469[0x3]; // offset 0x1469
    CustomCrosshairSettings_t m_CustomCrosshairSettings; // offset 0x146C, size 0x44, align 4 | MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PassiveWeaponParticle; // offset 0x14B0, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_strPassiveWeaponAttachmentSource; // offset 0x1590, size 0x8, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceZoom; // offset 0x1598, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceUnZoom; // offset 0x1638, size 0xA0, align 8
};
