#pragma once

class CCitadel_Modifier_FissureWallVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x9A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebrisParticle; // offset 0x798, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpikeParticle; // offset 0x878, size 0xE0, align 8
    CSoundEventName m_WallSpawnSound; // offset 0x958, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x968, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_EnemyVisionModifier; // offset 0x978, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x988, size 0x10, align 8
    float32 m_flSentryDistanceFromWall; // offset 0x998, size 0x4, align 4 | MPropertyStartGroup
    char _pad_099C[0x4]; // offset 0x99C
};
