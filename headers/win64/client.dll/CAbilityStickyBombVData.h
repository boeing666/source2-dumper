#pragma once

class CAbilityStickyBombVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1518, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BombAttachedModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_SelfBuffModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x1408, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastBombParticle; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flPostRangeGravityScale; // offset 0x14F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAllyCollideRadius; // offset 0x14FC, size 0x4, align 4
    float32 m_flBombDragStartRange; // offset 0x1500, size 0x4, align 4
    float32 m_flBombDragStartValue; // offset 0x1504, size 0x4, align 4
    float32 m_flBombDragEndValue; // offset 0x1508, size 0x4, align 4
    float32 m_flAllyTargetRangeMult; // offset 0x150C, size 0x4, align 4
    float32 m_flHookTargetOnlyWindow; // offset 0x1510, size 0x4, align 4
    char _pad_1514[0x4]; // offset 0x1514
};
