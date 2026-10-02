#pragma once

class CCitadel_Ability_VoidSphereVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_BubbleModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strCastEffect; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strAllyPositionPreview; // offset 0x14D8, size 0xE0, align 8
};
