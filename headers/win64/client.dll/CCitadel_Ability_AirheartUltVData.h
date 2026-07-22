#pragma once

class CCitadel_Ability_AirheartUltVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1D70, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlareParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PackageOpenParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PackagePunchedParticle; // offset 0x1AB8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PackageCrashedOnGroundParticle; // offset 0x1B98, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_PackageModel; // offset 0x1C78, size 0xE0, align 8
    float32 m_flModelScale; // offset 0x1D58, size 0x4, align 4
    float32 m_flGravitySlowFalling; // offset 0x1D5C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGravityFalling; // offset 0x1D60, size 0x4, align 4
    float32 m_flMaxElevation; // offset 0x1D64, size 0x4, align 4
    float32 m_flSlowFallElevationStart; // offset 0x1D68, size 0x4, align 4
    float32 m_flSlowFallElevationEnd; // offset 0x1D6C, size 0x4, align 4
};
