#pragma once

class CCitadel_Modifier_Mirage_SandPhantom_Proc_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA90, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertySuppressBaseClassField}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    bool m_bRollOnceForAllBulletsInAShot; // offset 0x790, size 0x1, align 1 | MPropertyDescription
    char _pad_0791[0x3]; // offset 0x791
    float32 m_flMaxBulletsToProcInShot; // offset 0x794, size 0x4, align 4 | MPropertyDescription
    bool m_bCanProcMultipleTimesFromSameShot; // offset 0x798, size 0x1, align 1 | MPropertyDescription
    bool m_bRequiresTargetFilter; // offset 0x799, size 0x1, align 1 | MPropertyDescription
    char _pad_079A[0x6]; // offset 0x79A
    CEmbeddedSubclass< CCitadelModifier > m_ProcReadyModifier; // offset 0x7A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PassiveVictimModifier; // offset 0x7B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcReadyParticle; // offset 0x7C0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // offset 0x8A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x980, size 0xE0, align 8
    CSoundEventName m_OnBulletRolledProcSound; // offset 0xA60, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_ProcSound; // offset 0xA70, size 0x10, align 8
    CSoundEventName m_ExplodeSound; // offset 0xA80, size 0x10, align 8
};
