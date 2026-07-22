#pragma once

class CCitadel_BreakablePropVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    bool m_bBreakOnDodgeTouch; // offset 0x28, size 0x1, align 1 | MPropertyGroupName MPropertyDescription MPropertyFriendlyName
    bool m_bRenderAfterDeath; // offset 0x29, size 0x1, align 1 | MPropertyGroupName MPropertyDescription MPropertyFriendlyName
    bool m_bSolidAfterDeath; // offset 0x2A, size 0x1, align 1 | MPropertyGroupName MPropertyDescription MPropertyFriendlyName
    bool m_bIsPermanent; // offset 0x2B, size 0x1, align 1 | MPropertyGroupName MPropertyDescription MPropertyFriendlyName
    bool m_bDamagedByBullets; // offset 0x2C, size 0x1, align 1 | MPropertyGroupName MPropertyDescription MPropertyFriendlyName
    bool m_bDamagedByMelee; // offset 0x2D, size 0x1, align 1 | MPropertyGroupName MPropertyDescription MPropertyFriendlyName
    bool m_bDamagedByAbilities; // offset 0x2E, size 0x1, align 1 | MPropertyGroupName MPropertyDescription MPropertyFriendlyName
    char _pad_002F[0x1]; // offset 0x2F
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // offset 0x30, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription MPropertyProvidesEditContextString
    CGlobalSymbol m_sAnimgraphParamDamageReceived; // offset 0x110, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription MPropertyAttributeEditor
    CGlobalSymbol m_sAnimgraphParamOnHit; // offset 0x118, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription MPropertyAttributeEditor
    CGlobalSymbol m_sAnimgraphParamOnRespawn; // offset 0x120, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription MPropertyAttributeEditor
    CSoundEventName m_sBreakSound; // offset 0x128, size 0x10, align 8 | MPropertyGroupName MPropertyDescription
    CSoundEventName m_sSpawnSound; // offset 0x138, size 0x10, align 8
    CSoundEventName m_sDamageSound; // offset 0x148, size 0x10, align 8 | MPropertyGroupName MPropertyDescription
    CSoundEventName m_sHeavyDamageSound; // offset 0x158, size 0x10, align 8
    CSoundEventName m_sHitIndicatorSound; // offset 0x168, size 0x10, align 8 | MPropertyGroupName MPropertyDescription
    int32 m_iHealth; // offset 0x178, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    float32 m_flInitialSpawnTime; // offset 0x17C, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flRespawnTime; // offset 0x180, size 0x4, align 4
    float32 m_flInitialSpawnTimeTest; // offset 0x184, size 0x4, align 4
    float32 m_flRespawnTimeTest; // offset 0x188, size 0x4, align 4
    bool m_bIsMantleable; // offset 0x18C, size 0x1, align 1 | MPropertyDescription
    char _pad_018D[0x3]; // offset 0x18D
    float32 m_flPrimaryDropChance; // offset 0x190, size 0x4, align 4 | MPropertyDescription
    ECitadelRandomRollTypes m_eRollType; // offset 0x194, size 0x4, align 4 | MPropertyDescription
    CUtlVector< BreakablePowerupDropDefinition_t > m_vecPrimaryPickups; // offset 0x198, size 0x18, align 8 | MPropertyStartGroup MPropertyDescription
    int32 m_iMatchTimeMinsForLevel2Pickups; // offset 0x1B0, size 0x4, align 4 | MPropertyDescription
    char _pad_01B4[0x4]; // offset 0x1B4
    CUtlVector< BreakablePowerupDropDefinition_t > m_vecPickups_lv2; // offset 0x1B8, size 0x18, align 8
    int32 m_iMatchTimeMinsForLevel3Pickups; // offset 0x1D0, size 0x4, align 4 | MPropertyDescription
    char _pad_01D4[0x4]; // offset 0x1D4
    CUtlVector< BreakablePowerupDropDefinition_t > m_vecPickups_lv3; // offset 0x1D8, size 0x18, align 8
    int32 m_iLootListDeckSize; // offset 0x1F0, size 0x4, align 4 | MPropertyDescription
    char _pad_01F4[0x4]; // offset 0x1F4
};
