#pragma once

class CAbilityStickyBombVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BombAttachedModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_SelfBuffModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x13C0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastBombParticle; // offset 0x13D0, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flPostRangeGravityScale; // offset 0x14B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAllyCollideRadius; // offset 0x14B4, size 0x4, align 4
    float32 m_flBombDragStartRange; // offset 0x14B8, size 0x4, align 4
    float32 m_flBombDragStartValue; // offset 0x14BC, size 0x4, align 4
    float32 m_flBombDragEndValue; // offset 0x14C0, size 0x4, align 4
    float32 m_flAllyTargetRangeMult; // offset 0x14C4, size 0x4, align 4
    float32 m_flHookTargetOnlyWindow; // offset 0x14C8, size 0x4, align 4
    char _pad_14CC[0x4]; // offset 0x14CC
};
