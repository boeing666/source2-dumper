#pragma once

class CItemPhantomStrike_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1468, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1180, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PullDownModifier; // offset 0x1190, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x11A0, size 0x10, align 8
    CSoundEventName m_strExplodeSound; // offset 0x11B0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x11C0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x12A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // offset 0x1380, size 0xE0, align 8
    float32 m_flTeleportDistance; // offset 0x1460, size 0x4, align 4 | MPropertyGroupName
    float32 m_flVelocityScale; // offset 0x1464, size 0x4, align 4
};
