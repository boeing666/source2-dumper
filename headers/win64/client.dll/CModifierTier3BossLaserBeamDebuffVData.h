#pragma once

class CModifierTier3BossLaserBeamDebuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xAE0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    float32 m_flTickRate; // offset 0x750, size 0x4, align 4
    float32 m_flNPCDPS; // offset 0x754, size 0x4, align 4
    float32 m_flPlayerDPS; // offset 0x758, size 0x4, align 4
    float32 m_flMaxHealthDPS; // offset 0x75C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberStatusEffect; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmberEffect; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphStatusEffect; // offset 0x920, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SapphEffect; // offset 0xA00, size 0xE0, align 8
};
