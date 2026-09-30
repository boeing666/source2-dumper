#pragma once

class CCitadelModifierItemPickupTimerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnExpireParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_TimerToSilence; // offset 0x840, size 0x4, align 4 | MPropertyGroupName
    float32 m_SilenceDuration; // offset 0x844, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x848, size 0x10, align 8 | MPropertyStartGroup
    bool m_bIsIdolPickup; // offset 0x858, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0859[0x7]; // offset 0x859
};
