#pragma once

class CItemPhantomStrike_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1798, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x14B0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PullDownModifier; // offset 0x14C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x14D0, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x14E0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x14F0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x15D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // offset 0x16B0, size 0xE0, align 8
    float32 m_flTeleportDistance; // offset 0x1790, size 0x4, align 4 | MPropertyGroupName
    float32 m_flVelocityScale; // offset 0x1794, size 0x4, align 4
};
