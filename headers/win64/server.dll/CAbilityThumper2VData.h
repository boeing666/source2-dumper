#pragma once

class CAbilityThumper2VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strStompExplosionSound; // offset 0x14C8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x14D8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_BarbedWireAuraModifier; // offset 0x14E8, size 0x10, align 8
};
