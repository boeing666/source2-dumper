#pragma once

class CAbilityWreckerTeleportVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1778, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1640, size 0xE0, align 8
    float32 m_ArrowOffsetX; // offset 0x1720, size 0x4, align 4
    float32 m_ArrowCameraDistance; // offset 0x1724, size 0x4, align 4
    float32 m_ArrowCameraHeightOffset; // offset 0x1728, size 0x4, align 4
    float32 m_ArrowInitialPitch; // offset 0x172C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // offset 0x1730, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1740, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1750, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTrackAmount; // offset 0x1760, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSpeedAccel; // offset 0x1764, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1768, size 0x4, align 4
    float32 m_flBaseProjectileSpeed; // offset 0x176C, size 0x4, align 4
    float32 m_flMaxProjectileSpeed; // offset 0x1770, size 0x4, align 4
    char _pad_1774[0x4]; // offset 0x1774
};
