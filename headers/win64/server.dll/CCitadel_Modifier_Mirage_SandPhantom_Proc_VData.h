#pragma once

class CCitadel_Modifier_Mirage_SandPhantom_Proc_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MPropertySuppressBaseClassField}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    bool m_bRollOnceForAllBulletsInAShot; // offset 0x798, size 0x1, align 1 | MPropertyDescription
    char _pad_0799[0x3]; // offset 0x799
    float32 m_flMaxBulletsToProcInShot; // offset 0x79C, size 0x4, align 4 | MPropertyDescription
    bool m_bCanProcMultipleTimesFromSameShot; // offset 0x7A0, size 0x1, align 1 | MPropertyDescription
    bool m_bRequiresTargetFilter; // offset 0x7A1, size 0x1, align 1 | MPropertyDescription
    char _pad_07A2[0x6]; // offset 0x7A2
    CEmbeddedSubclass< CCitadelModifier > m_ProcReadyModifier; // offset 0x7A8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PassiveVictimModifier; // offset 0x7B8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcReadyParticle; // offset 0x7C8, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // offset 0x8A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x988, size 0xE0, align 8
    CSoundEventName m_OnBulletRolledProcSound; // offset 0xA68, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_ProcSound; // offset 0xA78, size 0x10, align 8
    CSoundEventName m_ExplodeSound; // offset 0xA88, size 0x10, align 8
};
