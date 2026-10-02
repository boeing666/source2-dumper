#pragma once

class CCitadel_Upgrade_MagicCarpetVData : public CitadelItemVData /*0x0*/  // sizeof 0x1630, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // offset 0x14F8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetModifier; // offset 0x15D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetModifier; // offset 0x15E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetVisualModifier; // offset 0x15F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetVisualModifier; // offset 0x1608, size 0x10, align 8
    float32 m_flSummonVisualDuration; // offset 0x1618, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBurstSpeedBonus; // offset 0x161C, size 0x4, align 4
    float32 m_flBurstSpeedMin; // offset 0x1620, size 0x4, align 4
    float32 m_flBurstSpeedDuration; // offset 0x1624, size 0x4, align 4
    float32 m_flMinDistanceAboveGround; // offset 0x1628, size 0x4, align 4
    char _pad_162C[0x4]; // offset 0x162C
};
