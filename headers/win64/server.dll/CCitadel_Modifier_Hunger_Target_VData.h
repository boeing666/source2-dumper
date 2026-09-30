#pragma once

class CCitadel_Modifier_Hunger_Target_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HungerTargetParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HungerTargetPlayerParticle; // offset 0x840, size 0xE0, align 8
    CRemapFloat m_distanceToPitchRemap; // offset 0x920, size 0x10, align 255 | MPropertyGroupName MPropertyDescription
};
