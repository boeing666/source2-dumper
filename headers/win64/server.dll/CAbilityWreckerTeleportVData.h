#pragma once

class CAbilityWreckerTeleportVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1458, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1320, size 0xE0, align 8
    float32 m_ArrowOffsetX; // offset 0x1400, size 0x4, align 4
    float32 m_ArrowCameraDistance; // offset 0x1404, size 0x4, align 4
    float32 m_ArrowCameraHeightOffset; // offset 0x1408, size 0x4, align 4
    float32 m_ArrowInitialPitch; // offset 0x140C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // offset 0x1410, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1420, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1430, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTrackAmount; // offset 0x1440, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSpeedAccel; // offset 0x1444, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1448, size 0x4, align 4
    float32 m_flBaseProjectileSpeed; // offset 0x144C, size 0x4, align 4
    float32 m_flMaxProjectileSpeed; // offset 0x1450, size 0x4, align 4
    char _pad_1454[0x4]; // offset 0x1454
};
