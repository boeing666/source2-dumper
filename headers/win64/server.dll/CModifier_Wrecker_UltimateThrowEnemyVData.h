#pragma once

class CModifier_Wrecker_UltimateThrowEnemyVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0xA00, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x840]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyHeroStasisEffect; // offset 0x840, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyHeroGrabEffect; // offset 0x920, size 0xE0, align 8
};
