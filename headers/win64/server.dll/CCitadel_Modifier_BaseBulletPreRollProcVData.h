#pragma once

class CCitadel_Modifier_BaseBulletPreRollProcVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MPropertySuppressBaseClassField}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    bool m_bRollOnceForAllBulletsInAShot; // offset 0x790, size 0x1, align 1 | MPropertyDescription
    char _pad_0791[0x3]; // offset 0x791
    float32 m_flMaxBulletsToProcInShot; // offset 0x794, size 0x4, align 4 | MPropertyDescription
    bool m_bCanProcMultipleTimesFromSameShot; // offset 0x798, size 0x1, align 1 | MPropertyDescription
    bool m_bRequiresTargetFilter; // offset 0x799, size 0x1, align 1 | MPropertyDescription
    bool m_bCanBeEvaded; // offset 0x79A, size 0x1, align 1 | MPropertyDescription
    char _pad_079B[0x5]; // offset 0x79B
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // offset 0x7A0, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_OnBulletRolledProcSound; // offset 0x880, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
};
