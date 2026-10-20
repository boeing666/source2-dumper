#pragma once

class CCitadel_Upgrade_MagicCarpetVData : public CitadelItemVData /*0x0*/  // sizeof 0x12B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // offset 0x1180, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetModifier; // offset 0x1260, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetModifier; // offset 0x1270, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SummonFlyingCarpetVisualModifier; // offset 0x1280, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FlyingCarpetVisualModifier; // offset 0x1290, size 0x10, align 8
    float32 m_flSummonVisualDuration; // offset 0x12A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBurstSpeedBonus; // offset 0x12A4, size 0x4, align 4
    float32 m_flBurstSpeedMin; // offset 0x12A8, size 0x4, align 4
    float32 m_flBurstSpeedDuration; // offset 0x12AC, size 0x4, align 4
    float32 m_flMinDistanceAboveGround; // offset 0x12B0, size 0x4, align 4
    char _pad_12B4[0x4]; // offset 0x12B4
};
