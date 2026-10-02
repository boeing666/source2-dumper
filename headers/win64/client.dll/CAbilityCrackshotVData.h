#pragma once

class CAbilityCrackshotVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionVictimParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReadyParticle; // offset 0x15A8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1688, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CrackshotImmuneModifier; // offset 0x1698, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0x16A8, size 0x10, align 8
    CSoundEventName m_HeadShotVictimSound; // offset 0x16B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HeadShotConfirmationSound; // offset 0x16C8, size 0x10, align 8
    CSoundEventName m_ReadySound; // offset 0x16D8, size 0x10, align 8
};
