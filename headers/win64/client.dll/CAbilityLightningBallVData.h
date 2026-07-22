#pragma once

class CAbilityLightningBallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1940, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ZapModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1828, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x1838, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProjectileLoopingSound; // offset 0x1848, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapParticle; // offset 0x1858, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flHitSpeed; // offset 0x1938, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flNonHeroHitSpeed; // offset 0x193C, size 0x4, align 4
};
