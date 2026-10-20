#pragma once

class CItem_WarpStone_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1388, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x1180, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_CasterDebuffModifier; // offset 0x1190, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x11A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x11B0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x1290, size 0xE0, align 8
    float32 m_flGroundProbeSpeed; // offset 0x1370, size 0x4, align 4 | MPropertyGroupName
    float32 m_flGroundStepDown; // offset 0x1374, size 0x4, align 4
    float32 m_flGroundStepUp; // offset 0x1378, size 0x4, align 4
    int32 m_iMaxGroundIterations; // offset 0x137C, size 0x4, align 4
    float32 m_flVelocityScale; // offset 0x1380, size 0x4, align 4
    char _pad_1384[0x4]; // offset 0x1384
};
