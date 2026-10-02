#pragma once

class CAbilityGooGrenadeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_GooGrenadeImpactModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GooGrenadePuddleAuraModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GooGrenadePuddleAuraFriendlyModifier; // offset 0x1408, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeSkipParticle; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GooGrenadeExplodeParticle; // offset 0x14F8, size 0xE0, align 8
    CSoundEventName m_GrenadeHitSound; // offset 0x15D8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flMinRestitution; // offset 0x15E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxRestitution; // offset 0x15EC, size 0x4, align 4
};
