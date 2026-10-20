#pragma once

class CCitadel_Ability_Priest_Flashbang_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1270, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BounceParticle; // offset 0x1160, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x1240, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BounceSound; // offset 0x1250, size 0x10, align 8
    float32 m_flMinSurfaceDotToBounce; // offset 0x1260, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMaxSurfaceDotToBounce; // offset 0x1264, size 0x4, align 4
    float32 m_flBounceVerticalReductionRatio; // offset 0x1268, size 0x4, align 4
    bool m_bDebug; // offset 0x126C, size 0x1, align 1
    char _pad_126D[0x3]; // offset 0x126D
};
