#pragma once

class CCitadel_Modifier_SleepDaggerAsleepVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PostSleepModifier; // offset 0x870, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PostSleepBulletShredModifier; // offset 0x880, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PostSleepStaminaModifier; // offset 0x890, size 0x10, align 8
};
