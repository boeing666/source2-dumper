#pragma once

class CCitadel_Modifier_IceDomeVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DomeParticle; // offset 0x830, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // offset 0x910, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_EnemyAuraModifier; // offset 0x920, size 0x10, align 8
    CSoundEventName m_strDomeEndSound; // offset 0x930, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTargetLoopingSound; // offset 0x940, size 0x10, align 8 | MPropertyGroupName
};
