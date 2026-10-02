#pragma once

class CCitadel_Modifier_BaseBulletPreRollProcVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertySuppressBaseClassField}
{
public:
    char _pad_0000[0x7C8]; // offset 0x0
    bool m_bRollOnceForAllBulletsInAShot; // offset 0x7C8, size 0x1, align 1 | MPropertyDescription
    char _pad_07C9[0x3]; // offset 0x7C9
    float32 m_flMaxBulletsToProcInShot; // offset 0x7CC, size 0x4, align 4 | MPropertyDescription
    bool m_bCanProcMultipleTimesFromSameShot; // offset 0x7D0, size 0x1, align 1 | MPropertyDescription
    bool m_bRequiresTargetFilter; // offset 0x7D1, size 0x1, align 1 | MPropertyDescription
    bool m_bCanBeEvaded; // offset 0x7D2, size 0x1, align 1 | MPropertyDescription
    char _pad_07D3[0x5]; // offset 0x7D3
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // offset 0x7D8, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_OnBulletRolledProcSound; // offset 0x8B8, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
};
