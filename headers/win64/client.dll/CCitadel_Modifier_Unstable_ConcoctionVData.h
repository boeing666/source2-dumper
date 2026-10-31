#pragma once

class CCitadel_Modifier_Unstable_ConcoctionVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x978, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x878, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableModifier; // offset 0x958, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0x968, size 0x10, align 8 | MPropertyStartGroup
};
