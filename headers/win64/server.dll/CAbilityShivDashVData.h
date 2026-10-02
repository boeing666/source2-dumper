#pragma once

class CAbilityShivDashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DashModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13F8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x1408, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x14E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x15C8, size 0xE0, align 8
    CSoundEventName m_strDashStartEcho; // offset 0x16A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDashHitEnemy; // offset 0x16B8, size 0x10, align 8
    float32 m_flEchoDelay; // offset 0x16C8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_16CC[0x4]; // offset 0x16CC
};
