#pragma once

class CCitadel_Modifier_Mirage_SandPhantom_Proc_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertySuppressBaseClassField}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    bool m_bRollOnceForAllBulletsInAShot; // offset 0x750, size 0x1, align 1 | MPropertyDescription
    char _pad_0751[0x3]; // offset 0x751
    float32 m_flMaxBulletsToProcInShot; // offset 0x754, size 0x4, align 4 | MPropertyDescription
    bool m_bCanProcMultipleTimesFromSameShot; // offset 0x758, size 0x1, align 1 | MPropertyDescription
    bool m_bRequiresTargetFilter; // offset 0x759, size 0x1, align 1 | MPropertyDescription
    char _pad_075A[0x6]; // offset 0x75A
    CEmbeddedSubclass< CCitadelModifier > m_ProcReadyModifier; // offset 0x760, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PassiveVictimModifier; // offset 0x770, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcReadyParticle; // offset 0x780, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // offset 0x860, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x940, size 0xE0, align 8
    CSoundEventName m_OnBulletRolledProcSound; // offset 0xA20, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_ProcSound; // offset 0xA30, size 0x10, align 8
    CSoundEventName m_ExplodeSound; // offset 0xA40, size 0x10, align 8
};
