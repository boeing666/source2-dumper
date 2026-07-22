#pragma once

class CCitadelModifierItemPickupTimerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnExpireParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_TimerToSilence; // offset 0x830, size 0x4, align 4 | MPropertyGroupName
    float32 m_SilenceDuration; // offset 0x834, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x838, size 0x10, align 8 | MPropertyStartGroup
    bool m_bIsIdolPickup; // offset 0x848, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0849[0x7]; // offset 0x849
};
