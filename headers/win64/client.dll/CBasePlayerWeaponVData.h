#pragma once

class CBasePlayerWeaponVData  // sizeof 0x510, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_szClassName; // offset 0x10, size 0x8, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // offset 0x18, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription MPropertyProvidesEditContextString
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModelAg2Override; // offset 0xF8, size 0xE0, align 8 | MPropertyDescription MPropertyProvidesEditContextString
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName; // offset 0x1D8, size 0xE0, align 8 | MPropertyDescription
    bool m_bBuiltRightHanded; // offset 0x2B8, size 0x1, align 1 | MPropertyDescription
    bool m_bAllowFlipping; // offset 0x2B9, size 0x1, align 1 | MPropertyDescription
    char _pad_02BA[0x6]; // offset 0x2BA
    CAttachmentNameSymbolWithStorage m_sMuzzleAttachment; // offset 0x2C0, size 0x20, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // offset 0x2E0, size 0xE0, align 8 | MPropertyDescription
    CUtlString m_szMuzzleFlashParticleConfig; // offset 0x3C0, size 0x8, align 8 | MPropertyDescription MPropertyAttributeEditor MPropertyEditContextOverrideKey
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szBarrelSmokeParticle; // offset 0x3C8, size 0xE0, align 8 | MPropertyDescription
    uint8 m_nMuzzleSmokeShotThreshold; // offset 0x4A8, size 0x1, align 1 | MPropertyDescription
    char _pad_04A9[0x3]; // offset 0x4A9
    float32 m_flMuzzleSmokeTimeout; // offset 0x4AC, size 0x4, align 4 | MPropertyDescription
    float32 m_flMuzzleSmokeDecrementRate; // offset 0x4B0, size 0x4, align 4 | MPropertyDescription
    bool m_bGenerateMuzzleLight; // offset 0x4B4, size 0x1, align 1
    bool m_bLinkedCooldowns; // offset 0x4B5, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    ItemFlagTypes_t m_iFlags; // offset 0x4B6, size 0x1, align 1
    char _pad_04B7[0x1]; // offset 0x4B7
    int32 m_iWeight; // offset 0x4B8, size 0x4, align 4 | MPropertyDescription
    bool m_bAutoSwitchTo; // offset 0x4BC, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    bool m_bAutoSwitchFrom; // offset 0x4BD, size 0x1, align 1 | MPropertyFriendlyName
    AmmoIndex_t m_nPrimaryAmmoType; // offset 0x4BE, size 0x1, align 255 | MPropertyStartGroup MPropertyAttributeEditor MPropertyCustomFGDType
    AmmoIndex_t m_nSecondaryAmmoType; // offset 0x4BF, size 0x1, align 255 | MPropertyAttributeEditor MPropertyCustomFGDType
    int32 m_iMaxClip1; // offset 0x4C0, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription MPropertyAttributeRange
    int32 m_iMaxClip2; // offset 0x4C4, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription MPropertyAttributeRange
    int32 m_iDefaultClip1; // offset 0x4C8, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    int32 m_iDefaultClip2; // offset 0x4CC, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    bool m_bReserveAmmoAsClips; // offset 0x4D0, size 0x1, align 1 | MPropertyDescription
    bool m_bTreatAsSingleClip; // offset 0x4D1, size 0x1, align 1 | MPropertyDescription
    bool m_bKeepLoadedAmmo; // offset 0x4D2, size 0x1, align 1 | MPropertyDescription
    char _pad_04D3[0x1]; // offset 0x4D3
    RumbleEffect_t m_iRumbleEffect; // offset 0x4D4, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDropSpeed; // offset 0x4D8, size 0x4, align 4
    int32 m_iSlot; // offset 0x4DC, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    int32 m_iPosition; // offset 0x4E0, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    char _pad_04E4[0x4]; // offset 0x4E4
    CUtlOrderedMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // offset 0x4E8, size 0x28, align 8 | MPropertyStartGroup
};
