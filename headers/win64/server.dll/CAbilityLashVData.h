#pragma once

class CAbilityLashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1180, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LashParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1150, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AirControlModifier; // offset 0x1160, size 0x10, align 8
    CSoundEventName m_strVictimCastSound; // offset 0x1170, size 0x10, align 8 | MPropertyStartGroup
};
