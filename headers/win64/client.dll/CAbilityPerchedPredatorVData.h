#pragma once

class CAbilityPerchedPredatorVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1668, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeBaseParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFriendlyParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEnemyParticle; // offset 0x1560, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1640, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ModifierDragEnemy; // offset 0x1650, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flOnHitDetonateTimer; // offset 0x1660, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTraceTravelRadius; // offset 0x1664, size 0x4, align 4
};
