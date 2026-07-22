#pragma once

class CModifierTier3BossInvulnVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x918, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberShieldParticle; // offset 0x750, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphShieldParticle; // offset 0x830, size 0xE0, align 8
    float32 m_flShieldRadius; // offset 0x910, size 0x4, align 4
    char _pad_0914[0x4]; // offset 0x914
};
