#pragma once

class CAbilityWreckerTeleportVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1448, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1310, size 0xE0, align 8
    float32 m_ArrowOffsetX; // offset 0x13F0, size 0x4, align 4
    float32 m_ArrowCameraDistance; // offset 0x13F4, size 0x4, align 4
    float32 m_ArrowCameraHeightOffset; // offset 0x13F8, size 0x4, align 4
    float32 m_ArrowInitialPitch; // offset 0x13FC, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // offset 0x1400, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1410, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1420, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTrackAmount; // offset 0x1430, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSpeedAccel; // offset 0x1434, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1438, size 0x4, align 4
    float32 m_flBaseProjectileSpeed; // offset 0x143C, size 0x4, align 4
    float32 m_flMaxProjectileSpeed; // offset 0x1440, size 0x4, align 4
    char _pad_1444[0x4]; // offset 0x1444
};
