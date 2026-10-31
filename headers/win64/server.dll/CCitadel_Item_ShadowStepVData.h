#pragma once

class CCitadel_Item_ShadowStepVData : public CitadelItemVData /*0x0*/  // sizeof 0x1550, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // offset 0x1190, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x1270, size 0xE0, align 8
    CSoundEventName m_strPulseTickSound; // offset 0x1350, size 0x10, align 8 | MPropertyStartGroup
    int32 m_iMaxTargets; // offset 0x1360, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1364[0x4]; // offset 0x1364
    CSoundEventName m_strExplodeSound; // offset 0x1368, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x1378, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x1458, size 0xE0, align 8
    float32 m_flGroundProbeSpeed; // offset 0x1538, size 0x4, align 4 | MPropertyGroupName
    float32 m_flGroundStepDown; // offset 0x153C, size 0x4, align 4
    float32 m_flGroundStepUp; // offset 0x1540, size 0x4, align 4
    int32 m_iMaxGroundIterations; // offset 0x1544, size 0x4, align 4
    float32 m_flVelocityScale; // offset 0x1548, size 0x4, align 4
    char _pad_154C[0x4]; // offset 0x154C
};
