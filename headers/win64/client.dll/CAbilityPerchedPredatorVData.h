#pragma once

class CAbilityPerchedPredatorVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AE0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeBaseParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFriendlyParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEnemyParticle; // offset 0x19D8, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1AB8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ModifierDragEnemy; // offset 0x1AC8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flOnHitDetonateTimer; // offset 0x1AD8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTraceTravelRadius; // offset 0x1ADC, size 0x4, align 4
};
