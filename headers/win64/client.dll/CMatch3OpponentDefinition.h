#pragma once

class CMatch3OpponentDefinition  // sizeof 0x1A0, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    Match3OpponentID_t m_unOpponentID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0xC]; // offset 0x4
    CUtlString m_sLocName; // offset 0x10, size 0x8, align 8
    CUtlString m_sLocFlavor; // offset 0x18, size 0x8, align 8
    CUtlString m_sUnitName; // offset 0x20, size 0x8, align 8
    CUtlString m_sModelName; // offset 0x28, size 0x8, align 8
    HeroID_t m_nHeroID; // offset 0x30, size 0x4, align 255
    char _pad_0034[0x4]; // offset 0x34
    CUtlVector< CMatch3OpponentHeroItemDefinition > m_vecHeroItems; // offset 0x38, size 0x18, align 8
    int32 m_nHeroPrimarySlotIndex; // offset 0x50, size 0x4, align 4
    int32 m_nHeroModelIndex; // offset 0x54, size 0x4, align 4
    int32 m_nHeroSkinOverride; // offset 0x58, size 0x4, align 4
    Vector m_vModelOffset; // offset 0x5C, size 0xC, align 4
    float32 m_flModelScale; // offset 0x68, size 0x4, align 4
    float32 m_flMaxHealth; // offset 0x6C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sAttackParticleEffect; // offset 0x70, size 0xE0, align 8
    CUtlString m_sAttackImpactSound; // offset 0x150, size 0x8, align 8
    CUtlVector< CMatch3OpponentActionInstanceDefinition > m_vecIntroActions; // offset 0x158, size 0x18, align 8
    CUtlVector< CMatch3OpponentActionInstanceDefinition > m_vecRepeatingActions; // offset 0x170, size 0x18, align 8
    CUtlVector< CMatch3OpponentActionInstanceDefinition > m_vecOutroActions; // offset 0x188, size 0x18, align 8
};
