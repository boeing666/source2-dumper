#pragma once

class CCitadel_Modifier_SpiritBurnEnemyTrackerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x750, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CBaseModifier > m_ImmunityModifier; // offset 0x760, size 0x10, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x770, size 0xE0, align 8 | MPropertyGroupName
};
