#pragma once

class CAbilityPunkgoatTetherVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FireRateSlowModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TetheredModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PullModifier; // offset 0x13C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_WaitingToPullModifier; // offset 0x13D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableModifier; // offset 0x13E0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RopeParticle; // offset 0x13F0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strPullSound; // offset 0x14D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTimerSound; // offset 0x14E0, size 0x10, align 8
};
