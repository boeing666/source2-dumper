#pragma once

class CCitadel_Modifier_SalvoBulletVData : public CCitadel_Modifier_BaseBulletPreRollProcVData /*0x0*/  // sizeof 0xB98, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8C8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x8C8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x8D8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionVictimParticle; // offset 0x9B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SalvoWeaponParticle; // offset 0xA98, size 0xE0, align 8
    CSoundEventName m_ShotVictimSound; // offset 0xB78, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ShotConfirmationSound; // offset 0xB88, size 0x10, align 8
};
