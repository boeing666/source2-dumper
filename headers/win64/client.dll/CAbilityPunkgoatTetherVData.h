#pragma once

class CAbilityPunkgoatTetherVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1968, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FireRateSlowModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TetheredModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PullModifier; // offset 0x1838, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_WaitingToPullModifier; // offset 0x1848, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableModifier; // offset 0x1858, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RopeParticle; // offset 0x1868, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strPullSound; // offset 0x1948, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTimerSound; // offset 0x1958, size 0x10, align 8
};
