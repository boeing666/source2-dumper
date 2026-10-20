#pragma once

class CAbilityPerchedPredatorVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1338, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeBaseParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeFriendlyParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeEnemyParticle; // offset 0x1230, size 0xE0, align 8
    CSoundEventName m_strExplodeSound; // offset 0x1310, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ModifierDragEnemy; // offset 0x1320, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flOnHitDetonateTimer; // offset 0x1330, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTraceTravelRadius; // offset 0x1334, size 0x4, align 4
};
