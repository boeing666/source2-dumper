#pragma once

class CCitadelItemPickupRejuvVData : public CCitadelItemPickupVData /*0x0*/  // sizeof 0x220, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    CSubclassName< 4 > m_AbilityProjectile; // offset 0x108, size 0x10, align 8
    float32 m_flMaxDistForHeal; // offset 0x118, size 0x4, align 4
    float32 m_flPhysicsRadius; // offset 0x11C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_RebirthModifier; // offset 0x120, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PunchPickupModifier; // offset 0x130, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IsFrozenParticle; // offset 0x140, size 0xE0, align 8 | MPropertyStartGroup
};
