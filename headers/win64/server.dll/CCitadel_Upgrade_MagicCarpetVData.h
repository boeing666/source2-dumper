#pragma once

class CCitadel_Upgrade_MagicCarpetVData : public CitadelItemVData /*0x0*/  // sizeof 0x15E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // offset 0x14B0, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetModifier; // offset 0x1590, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetModifier; // offset 0x15A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetVisualModifier; // offset 0x15B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetVisualModifier; // offset 0x15C0, size 0x10, align 8
    float32 m_flSummonVisualDuration; // offset 0x15D0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBurstSpeedBonus; // offset 0x15D4, size 0x4, align 4
    float32 m_flBurstSpeedMin; // offset 0x15D8, size 0x4, align 4
    float32 m_flBurstSpeedDuration; // offset 0x15DC, size 0x4, align 4
    float32 m_flMinDistanceAboveGround; // offset 0x15E0, size 0x4, align 4
    char _pad_15E4[0x4]; // offset 0x15E4
};
