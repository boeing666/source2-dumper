#pragma once

class CAbilityShivDashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1B00, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DashModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1828, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashImpactEffect; // offset 0x1838, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashSwingEffect; // offset 0x1918, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashLineEffect; // offset 0x19F8, size 0xE0, align 8
    CSoundEventName m_strDashStartEcho; // offset 0x1AD8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDashHitEnemy; // offset 0x1AE8, size 0x10, align 8
    float32 m_flEchoDelay; // offset 0x1AF8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1AFC[0x4]; // offset 0x1AFC
};
