#pragma once

class CCitadel_Ability_UltComboVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1268, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeImpactParticle; // offset 0x1150, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x1230, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadel_Modifier_UltCombo_Target > m_TargetModifier; // offset 0x1240, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x1250, size 0x10, align 8
    float32 m_flKillCheckWindow; // offset 0x1260, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDamageInterval; // offset 0x1264, size 0x4, align 4
};
