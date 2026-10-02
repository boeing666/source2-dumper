#pragma once

class CItem_WarpStone_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1700, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x14F8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_CasterDebuffModifier; // offset 0x1508, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1518, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x1528, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x1608, size 0xE0, align 8
    float32 m_flGroundProbeSpeed; // offset 0x16E8, size 0x4, align 4 | MPropertyGroupName
    float32 m_flGroundStepDown; // offset 0x16EC, size 0x4, align 4
    float32 m_flGroundStepUp; // offset 0x16F0, size 0x4, align 4
    int32 m_iMaxGroundIterations; // offset 0x16F4, size 0x4, align 4
    float32 m_flVelocityScale; // offset 0x16F8, size 0x4, align 4
    char _pad_16FC[0x4]; // offset 0x16FC
};
