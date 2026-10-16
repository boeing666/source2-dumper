#pragma once

class CCitadelItemPickupRejuvVData : public CCitadelItemPickupVData /*0x0*/  // sizeof 0x238, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x120]; // offset 0x0
    CSubclassName< 4 > m_AbilityProjectile; // offset 0x120, size 0x10, align 8
    float32 m_flMaxDistForHeal; // offset 0x130, size 0x4, align 4
    char _pad_0134[0x4]; // offset 0x134
    CEmbeddedSubclass< CCitadelModifier > m_RebirthModifier; // offset 0x138, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PunchPickupModifier; // offset 0x148, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsFrozenParticle; // offset 0x158, size 0xE0, align 8 | MPropertyStartGroup
};
