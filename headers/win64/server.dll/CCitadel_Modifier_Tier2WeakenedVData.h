#pragma once

class CCitadel_Modifier_Tier2WeakenedVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0x978, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x878]; // offset 0x0
    float32 m_flTechDamagePctIncrease; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
    CSoundEventName m_WeakenedSound; // offset 0x880, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeakenedEffect; // offset 0x890, size 0xE0, align 8
    CUtlString m_sWeakenedEffectAttachment; // offset 0x970, size 0x8, align 8
};
