#pragma once

class CModifierRiotProtocolBuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserParticle; // offset 0x790, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseHitEnemyParticle; // offset 0x870, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x950, size 0x10, align 8 | MPropertyGroupName
};
