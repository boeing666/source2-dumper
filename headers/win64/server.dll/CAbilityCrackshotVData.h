#pragma once

class CAbilityCrackshotVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionVictimParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReadyParticle; // offset 0x1560, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1640, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CrackshotImmuneModifier; // offset 0x1650, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0x1660, size 0x10, align 8
    CSoundEventName m_HeadShotVictimSound; // offset 0x1670, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HeadShotConfirmationSound; // offset 0x1680, size 0x10, align 8
    CSoundEventName m_ReadySound; // offset 0x1690, size 0x10, align 8
};
