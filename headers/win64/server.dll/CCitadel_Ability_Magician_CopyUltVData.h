#pragma once

class CCitadel_Ability_Magician_CopyUltVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1508, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CopyTetherParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_UltCopiedModifier; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_UltActiveModifier; // offset 0x14D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InformTargetUltCopiedModifier; // offset 0x14E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CopiedUltSpawnedEntityModifier; // offset 0x14F8, size 0x10, align 8
};
