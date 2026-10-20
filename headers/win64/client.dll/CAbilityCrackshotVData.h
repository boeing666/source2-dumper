#pragma once

class CAbilityCrackshotVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1370, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionVictimParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ReadyParticle; // offset 0x1230, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1310, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_CrackshotImmuneModifier; // offset 0x1320, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0x1330, size 0x10, align 8
    CSoundEventName m_HeadShotVictimSound; // offset 0x1340, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HeadShotConfirmationSound; // offset 0x1350, size 0x10, align 8
    CSoundEventName m_ReadySound; // offset 0x1360, size 0x10, align 8
};
