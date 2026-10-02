#pragma once

class CAbilityLightningBallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1600, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ZapModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x13F8, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x1408, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProjectileLoopingSound; // offset 0x1418, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x1428, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapParticle; // offset 0x1438, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1518, size 0xE0, align 8
    float32 m_flHitSpeed; // offset 0x15F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flNonHeroHitSpeed; // offset 0x15FC, size 0x4, align 4
};
