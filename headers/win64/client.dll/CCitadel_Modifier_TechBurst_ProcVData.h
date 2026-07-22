#pragma once

class CCitadel_Modifier_TechBurst_ProcVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    bool m_bIgnoreResists; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x7]; // offset 0x781
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // offset 0x788, size 0xE0, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CBaseModifier > m_ProcNotificationModifier; // offset 0x868, size 0x10, align 8 | MPropertyGroupName
};
