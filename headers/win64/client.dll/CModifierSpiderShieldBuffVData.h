#pragma once

class CModifierSpiderShieldBuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // offset 0x790, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // offset 0x950, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PulseDebuffModifier; // offset 0xA30, size 0x10, align 8 | MPropertyGroupName
};
