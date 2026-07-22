#pragma once

class CItem_WarpStone_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1AC0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x18B8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_CasterDebuffModifier; // offset 0x18C8, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x18D8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x18E8, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x19C8, size 0xE0, align 8
    float32 m_flGroundProbeSpeed; // offset 0x1AA8, size 0x4, align 4 | MPropertyGroupName
    float32 m_flGroundStepDown; // offset 0x1AAC, size 0x4, align 4
    float32 m_flGroundStepUp; // offset 0x1AB0, size 0x4, align 4
    int32 m_iMaxGroundIterations; // offset 0x1AB4, size 0x4, align 4
    float32 m_flVelocityScale; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
