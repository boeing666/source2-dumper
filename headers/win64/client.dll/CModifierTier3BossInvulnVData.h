#pragma once

class CModifierTier3BossInvulnVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberShieldParticle; // offset 0x798, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphShieldParticle; // offset 0x878, size 0xE0, align 8
    float32 m_flShieldRadius; // offset 0x958, size 0x4, align 4
    char _pad_095C[0x4]; // offset 0x95C
};
