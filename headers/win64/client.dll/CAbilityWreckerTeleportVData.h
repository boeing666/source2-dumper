#pragma once

class CAbilityWreckerTeleportVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1BF0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpectatingProjectileParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChannelParticle; // offset 0x19D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1AB8, size 0xE0, align 8
    float32 m_ArrowOffsetX; // offset 0x1B98, size 0x4, align 4
    float32 m_ArrowCameraDistance; // offset 0x1B9C, size 0x4, align 4
    float32 m_ArrowCameraHeightOffset; // offset 0x1BA0, size 0x4, align 4
    float32 m_ArrowInitialPitch; // offset 0x1BA4, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_GuidingModifier; // offset 0x1BA8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1BB8, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1BC8, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTrackAmount; // offset 0x1BD8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSpeedAccel; // offset 0x1BDC, size 0x4, align 4
    float32 m_flSpeedDeccel; // offset 0x1BE0, size 0x4, align 4
    float32 m_flBaseProjectileSpeed; // offset 0x1BE4, size 0x4, align 4
    float32 m_flMaxProjectileSpeed; // offset 0x1BE8, size 0x4, align 4
    char _pad_1BEC[0x4]; // offset 0x1BEC
};
