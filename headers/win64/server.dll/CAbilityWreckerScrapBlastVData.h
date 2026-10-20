#pragma once

class CAbilityWreckerScrapBlastVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1240, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SprayParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelStartParticle; // offset 0x1150, size 0xE0, align 8
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
};
