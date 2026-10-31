#pragma once

class CModifierRiotProtocolBuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x968, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserParticle; // offset 0x798, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseHitEnemyParticle; // offset 0x878, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDebuffModifier; // offset 0x958, size 0x10, align 8 | MPropertyGroupName
};
