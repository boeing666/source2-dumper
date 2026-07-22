#pragma once

class CCitadel_Modifier_T3Boss_EffigyVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x910, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberEffigyEffect; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphEffigyEffect; // offset 0x830, size 0xE0, align 8
};
