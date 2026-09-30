#pragma once

class CCitadel_Modifier_Tier3_DamagePulseVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberZapParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphZapParticle; // offset 0x840, size 0xE0, align 8
    CSoundEventName m_strPulseTickSound; // offset 0x920, size 0x10, align 8 | MPropertyStartGroup
    int32 m_iMaxTargets; // offset 0x930, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRadius; // offset 0x934, size 0x4, align 4
    float32 m_flDamagePerPulse; // offset 0x938, size 0x4, align 4
    float32 m_flStartTickRate; // offset 0x93C, size 0x4, align 4
    float32 m_flEndTickRate; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x4]; // offset 0x944
};
