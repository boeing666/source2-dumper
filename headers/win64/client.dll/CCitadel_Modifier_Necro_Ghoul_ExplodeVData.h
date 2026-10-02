#pragma once

class CCitadel_Modifier_Necro_Ghoul_ExplodeVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x980, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WarningParticle; // offset 0x870, size 0xE0, align 8
    CSoundEventName m_ExplodeSound; // offset 0x950, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_WarningSound; // offset 0x960, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x970, size 0x10, align 8 | MPropertyStartGroup
};
