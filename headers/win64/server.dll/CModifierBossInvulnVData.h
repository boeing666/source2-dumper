#pragma once

class CModifierBossInvulnVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // offset 0x750, size 0xE0, align 8 | MPropertyGroupName
    float32 m_flShieldRadius; // offset 0x830, size 0x4, align 4
    char _pad_0834[0x4]; // offset 0x834
};
