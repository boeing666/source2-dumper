#pragma once

class CNPC_MidBossVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x1540, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    int32 m_iStartingHealth; // offset 0x1348, size 0x4, align 4
    int32 m_iHealthGainPerMinute; // offset 0x134C, size 0x4, align 4
    float32 m_flAggroTime; // offset 0x1350, size 0x4, align 4
    char _pad_1354[0x4]; // offset 0x1354
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingSmallExplosion; // offset 0x1358, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingFinalExplosion; // offset 0x1438, size 0xE0, align 8
    float32 m_flDyingDuration; // offset 0x1518, size 0x4, align 4
    char _pad_151C[0x4]; // offset 0x151C
    CEmbeddedSubclass< CCitadelModifier > m_KnockbackAura; // offset 0x1520, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AggroEnemy; // offset 0x1530, size 0x10, align 8
};
