#pragma once

class CNPC_BaseDefenseSentryVData : public CNPC_SimpleAnimatingAIVData /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    CSubclassName< 4 > m_AbilityWeapon; // offset 0x108, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SentryExplosionParticle; // offset 0x118, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flTimeToStartScale; // offset 0x1F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTimeToEndScale; // offset 0x1FC, size 0x4, align 4
    float32 m_flMaxScale; // offset 0x200, size 0x4, align 4
    char _pad_0204[0x4]; // offset 0x204
};
