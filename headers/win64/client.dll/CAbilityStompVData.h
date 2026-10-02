#pragma once

class CAbilityStompVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1508, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strStompExplosionSound; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCastDelayLocalPlayerSound; // offset 0x14D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x14E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0x14F8, size 0x10, align 8
};
