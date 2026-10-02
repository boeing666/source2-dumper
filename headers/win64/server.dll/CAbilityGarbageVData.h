#pragma once

class CAbilityGarbageVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_GarbageAuraModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flAirSpeedMax; // offset 0x14D8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFallSpeedMax; // offset 0x14DC, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x14E0, size 0x4, align 4
    float32 m_flMaxMovespeed; // offset 0x14E4, size 0x4, align 4
};
