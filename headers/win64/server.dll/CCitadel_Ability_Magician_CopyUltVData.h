#pragma once

class CCitadel_Ability_Magician_CopyUltVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x11A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CopyTetherParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_UltCopiedModifier; // offset 0x1150, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_UltActiveModifier; // offset 0x1160, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InformTargetUltCopiedModifier; // offset 0x1170, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CopiedUltSpawnedEntityModifier; // offset 0x1180, size 0x10, align 8
    CUtlVector< CopyUltCompanionAbility_t > m_vecCompanionAbilities; // offset 0x1190, size 0x18, align 8 | MPropertyStartGroup
};
