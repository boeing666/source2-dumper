#pragma once

class CModifierTier3BossLaserBeamDebuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB28, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    float32 m_flTickRate; // offset 0x798, size 0x4, align 4
    float32 m_flNPCDPS; // offset 0x79C, size 0x4, align 4
    float32 m_flPlayerDPS; // offset 0x7A0, size 0x4, align 4
    float32 m_flMaxHealthDPS; // offset 0x7A4, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberStatusEffect; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberEffect; // offset 0x888, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphStatusEffect; // offset 0x968, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphEffect; // offset 0xA48, size 0xE0, align 8
};
