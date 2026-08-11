#pragma once

class CCitadel_Ability_PrimaryWeaponVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x19C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1820]; // offset 0x0
    DOFDesc_t m_DOFWhileZoomed; // offset 0x1820, size 0x10, align 4 | MPropertyDescription
    bool m_bDOFFarSettingsAreOffsetByGunRange; // offset 0x1830, size 0x1, align 1 | MPropertyDescription
    char _pad_1831[0x7]; // offset 0x1831
    CSoundEventName m_sDisarmedSound; // offset 0x1838, size 0x10, align 8 | MPropertyStartGroup MPropertyFriendlyName
    float32 m_flMinDisarmedSoundInterval; // offset 0x1848, size 0x4, align 4
    char _pad_184C[0x4]; // offset 0x184C
    CSoundEventName m_sObstructedShotSound; // offset 0x1850, size 0x10, align 8
    CUtlOrderedMap< ENextAttackDelayReason_t, CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > > m_mapDelayLoopsSounds; // offset 0x1860, size 0x28, align 8
    float32 m_flActionReloadTimingStart; // offset 0x1888, size 0x4, align 4 | MPropertyStartGroup MPropertyAttributeRange MPropertyDescription
    float32 m_flActionReloadTimingDuration; // offset 0x188C, size 0x4, align 4 | MPropertyDescription
    CUtlString m_strCrosshairCSSClass; // offset 0x1890, size 0x8, align 8 | MPropertyStartGroup
    bool m_bUseCustomCrosshairSettings; // offset 0x1898, size 0x1, align 1
    char _pad_1899[0x3]; // offset 0x1899
    CustomCrosshairSettings_t m_CustomCrosshairSettings; // offset 0x189C, size 0x44, align 4 | MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PassiveWeaponParticle; // offset 0x18E0, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_strPassiveWeaponAttachmentSource; // offset 0x19C0, size 0x8, align 8
};
