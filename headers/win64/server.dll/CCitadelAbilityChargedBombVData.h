#pragma once

class CCitadelAbilityChargedBombVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1188, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ChargeBombModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1170, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flChargeForMaxDamage; // offset 0x1180, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMinDamagePercent; // offset 0x1184, size 0x4, align 4
};
