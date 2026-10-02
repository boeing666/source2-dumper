#pragma once

class CCitadel_Modifier_FlagAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    float32 m_flRatSpawnInterval; // offset 0x7E8, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    int32 m_nRatsPerSpawn; // offset 0x7EC, size 0x4, align 4 | MPropertyDescription
    int32 m_nRatYawSegments; // offset 0x7F0, size 0x4, align 4 | MPropertyDescription
    float32 m_flRatLeapSpeed; // offset 0x7F4, size 0x4, align 4 | MPropertyDescription
    float32 m_flRatLeapAngle; // offset 0x7F8, size 0x4, align 4 | MPropertyDescription
    float32 m_flRatLifetime; // offset 0x7FC, size 0x4, align 4 | MPropertyDescription
    float32 m_flRatTravelRadiusFraction; // offset 0x800, size 0x4, align 4 | MPropertyDescription
    int32 m_nBannerRatsAttached; // offset 0x804, size 0x4, align 4 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EndcapParticle; // offset 0x808, size 0xE0, align 8 | MPropertyStartGroup
};
