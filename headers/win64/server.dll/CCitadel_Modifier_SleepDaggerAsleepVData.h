#pragma once

class CCitadel_Modifier_SleepDaggerAsleepVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PostSleepModifier; // offset 0x840, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PostSleepBulletShredModifier; // offset 0x850, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PostSleepStaminaModifier; // offset 0x860, size 0x10, align 8
};
