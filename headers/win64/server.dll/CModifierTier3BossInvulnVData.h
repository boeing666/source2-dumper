#pragma once

class CModifierTier3BossInvulnVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x928, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberShieldParticle; // offset 0x760, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphShieldParticle; // offset 0x840, size 0xE0, align 8
    float32 m_flShieldRadius; // offset 0x920, size 0x4, align 4
    char _pad_0924[0x4]; // offset 0x924
};
