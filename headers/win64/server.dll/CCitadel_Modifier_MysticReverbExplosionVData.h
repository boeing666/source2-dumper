#pragma once

class CCitadel_Modifier_MysticReverbExplosionVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0x790, size 0xE0, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x870, size 0x10, align 8
};
