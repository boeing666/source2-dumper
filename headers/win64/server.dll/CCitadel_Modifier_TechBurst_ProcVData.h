#pragma once

class CCitadel_Modifier_TechBurst_ProcVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7D0]; // offset 0x0
    bool m_bIgnoreResists; // offset 0x7D0, size 0x1, align 1
    char _pad_07D1[0x7]; // offset 0x7D1
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcParticle; // offset 0x7D8, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strUnchargedProc; // offset 0x8B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFullChargedProc; // offset 0x8C8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ProcNotificationModifier; // offset 0x8D8, size 0x10, align 8 | MPropertyGroupName
};
