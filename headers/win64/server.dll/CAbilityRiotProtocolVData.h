#pragma once

class CAbilityRiotProtocolVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1250, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeUpParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1160, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_WardenBuffModifier; // offset 0x1240, size 0x10, align 8 | MPropertyGroupName
};
