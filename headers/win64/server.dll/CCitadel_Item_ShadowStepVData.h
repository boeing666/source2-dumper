#pragma once

class CCitadel_Item_ShadowStepVData : public CitadelItemVData /*0x0*/  // sizeof 0x1540, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // offset 0x1180, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x1260, size 0xE0, align 8
    CSoundEventName m_strPulseTickSound; // offset 0x1340, size 0x10, align 8 | MPropertyStartGroup
    int32 m_iMaxTargets; // offset 0x1350, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1354[0x4]; // offset 0x1354
    CSoundEventName m_strExplodeSound; // offset 0x1358, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x1368, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x1448, size 0xE0, align 8
    float32 m_flGroundProbeSpeed; // offset 0x1528, size 0x4, align 4 | MPropertyGroupName
    float32 m_flGroundStepDown; // offset 0x152C, size 0x4, align 4
    float32 m_flGroundStepUp; // offset 0x1530, size 0x4, align 4
    int32 m_iMaxGroundIterations; // offset 0x1534, size 0x4, align 4
    float32 m_flVelocityScale; // offset 0x1538, size 0x4, align 4
    char _pad_153C[0x4]; // offset 0x153C
};
