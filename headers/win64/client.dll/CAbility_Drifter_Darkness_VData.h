#pragma once

class CAbility_Drifter_Darkness_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_TargetRevealModifier; // offset 0x1838, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_OutOfCombatSprintCamera; // offset 0x1848, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1858, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // offset 0x1938, size 0xE0, align 8
    CSoundEventName m_HitConfirmSound; // offset 0x1A18, size 0x10, align 8 | MPropertyStartGroup
};
