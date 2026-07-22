#pragma once

class CCitadelModifierTier3BossAoeWaveAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x970, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7A8]; // offset 0x0
    float32 m_flWaveHeight; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberWaveParticle; // offset 0x7B0, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphWaveParticle; // offset 0x890, size 0xE0, align 8
};
