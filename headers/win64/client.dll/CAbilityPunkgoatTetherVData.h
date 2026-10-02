#pragma once

class CAbilityPunkgoatTetherVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1538, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FireRateSlowModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TetheredModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PullModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_WaitingToPullModifier; // offset 0x1418, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableModifier; // offset 0x1428, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RopeParticle; // offset 0x1438, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strPullSound; // offset 0x1518, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strTimerSound; // offset 0x1528, size 0x10, align 8
};
