#pragma once

class CCitadel_Modifier_SpiritBurnEnemyTrackerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x798, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CBaseModifier > m_ImmunityModifier; // offset 0x7A8, size 0x10, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x7B8, size 0xE0, align 8 | MPropertyGroupName
};
