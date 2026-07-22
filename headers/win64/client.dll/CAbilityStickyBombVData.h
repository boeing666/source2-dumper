#pragma once

class CAbilityStickyBombVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1948, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BombAttachedModifier; // offset 0x1818, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_SelfBuffModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x1838, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastBombParticle; // offset 0x1848, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flPostRangeGravityScale; // offset 0x1928, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAllyCollideRadius; // offset 0x192C, size 0x4, align 4
    float32 m_flBombDragStartRange; // offset 0x1930, size 0x4, align 4
    float32 m_flBombDragStartValue; // offset 0x1934, size 0x4, align 4
    float32 m_flBombDragEndValue; // offset 0x1938, size 0x4, align 4
    float32 m_flAllyTargetRangeMult; // offset 0x193C, size 0x4, align 4
    float32 m_flHookTargetOnlyWindow; // offset 0x1940, size 0x4, align 4
    char _pad_1944[0x4]; // offset 0x1944
};
