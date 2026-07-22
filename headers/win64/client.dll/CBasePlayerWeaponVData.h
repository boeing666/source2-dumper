#pragma once

class CBasePlayerWeaponVData  // sizeof 0x448, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_szClassName; // offset 0x10, size 0x8, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szWorldModel; // offset 0x18, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription MPropertyProvidesEditContextString
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sToolsOnlyOwnerModelName; // offset 0xF8, size 0xE0, align 8 | MPropertyDescription
    bool m_bBuiltRightHanded; // offset 0x1D8, size 0x1, align 1 | MPropertyDescription
    bool m_bAllowFlipping; // offset 0x1D9, size 0x1, align 1 | MPropertyDescription
    char _pad_01DA[0x6]; // offset 0x1DA
    CAttachmentNameSymbolWithStorage m_sMuzzleAttachment; // offset 0x1E0, size 0x20, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashParticle; // offset 0x200, size 0xE0, align 8 | MPropertyDescription
    CUtlString m_szMuzzleFlashParticleConfig; // offset 0x2E0, size 0x8, align 8 | MPropertyDescription MPropertyAttributeEditor MPropertyEditContextOverrideKey
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szBarrelSmokeParticle; // offset 0x2E8, size 0xE0, align 8 | MPropertyDescription
    uint8 m_nMuzzleSmokeShotThreshold; // offset 0x3C8, size 0x1, align 1 | MPropertyDescription
    char _pad_03C9[0x3]; // offset 0x3C9
    float32 m_flMuzzleSmokeTimeout; // offset 0x3CC, size 0x4, align 4 | MPropertyDescription
    float32 m_flMuzzleSmokeDecrementRate; // offset 0x3D0, size 0x4, align 4 | MPropertyDescription
    bool m_bGenerateMuzzleLight; // offset 0x3D4, size 0x1, align 1
    bool m_bLinkedCooldowns; // offset 0x3D5, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_03D6[0x2]; // offset 0x3D6
    CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // offset 0x3D8, size 0x18, align 8
    ItemFlagTypes_t m_iFlags; // offset 0x3F0, size 0x1, align 1
    char _pad_03F1[0x3]; // offset 0x3F1
    int32 m_iWeight; // offset 0x3F4, size 0x4, align 4 | MPropertyDescription
    bool m_bAutoSwitchTo; // offset 0x3F8, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    bool m_bAutoSwitchFrom; // offset 0x3F9, size 0x1, align 1 | MPropertyFriendlyName
    AmmoIndex_t m_nPrimaryAmmoType; // offset 0x3FA, size 0x1, align 255 | MPropertyStartGroup MPropertyAttributeEditor MPropertyCustomFGDType
    AmmoIndex_t m_nSecondaryAmmoType; // offset 0x3FB, size 0x1, align 255 | MPropertyAttributeEditor MPropertyCustomFGDType
    int32 m_iMaxClip1; // offset 0x3FC, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription MPropertyAttributeRange
    int32 m_iMaxClip2; // offset 0x400, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription MPropertyAttributeRange
    int32 m_iDefaultClip1; // offset 0x404, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    int32 m_iDefaultClip2; // offset 0x408, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    bool m_bReserveAmmoAsClips; // offset 0x40C, size 0x1, align 1 | MPropertyDescription
    bool m_bTreatAsSingleClip; // offset 0x40D, size 0x1, align 1 | MPropertyDescription
    bool m_bKeepLoadedAmmo; // offset 0x40E, size 0x1, align 1 | MPropertyDescription
    char _pad_040F[0x1]; // offset 0x40F
    RumbleEffect_t m_iRumbleEffect; // offset 0x410, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDropSpeed; // offset 0x414, size 0x4, align 4
    int32 m_iSlot; // offset 0x418, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    int32 m_iPosition; // offset 0x41C, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    CUtlOrderedMap< WeaponSound_t, CSoundEventName > m_aShootSounds; // offset 0x420, size 0x28, align 8 | MPropertyStartGroup
};
