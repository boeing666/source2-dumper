#pragma once

class CCitadel_Modifier_BaseBulletPreRollProcVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertySuppressBaseClassField}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    bool m_bRollOnceForAllBulletsInAShot; // offset 0x780, size 0x1, align 1 | MPropertyDescription
    char _pad_0781[0x3]; // offset 0x781
    float32 m_flMaxBulletsToProcInShot; // offset 0x784, size 0x4, align 4 | MPropertyDescription
    bool m_bCanProcMultipleTimesFromSameShot; // offset 0x788, size 0x1, align 1 | MPropertyDescription
    bool m_bRequiresTargetFilter; // offset 0x789, size 0x1, align 1 | MPropertyDescription
    bool m_bCanBeEvaded; // offset 0x78A, size 0x1, align 1 | MPropertyDescription
    char _pad_078B[0x5]; // offset 0x78B
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // offset 0x790, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_OnBulletRolledProcSound; // offset 0x870, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
};
