#pragma once

class CCitadel_Modifier_UltimateBurst_ProcVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LightningParticle; // offset 0x780, size 0xE0, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CBaseModifier > m_DelayedEffectModifier; // offset 0x860, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x870, size 0x10, align 8
    CSoundEventName m_strLightningSound; // offset 0x880, size 0x10, align 8 | MPropertyStartGroup
};
