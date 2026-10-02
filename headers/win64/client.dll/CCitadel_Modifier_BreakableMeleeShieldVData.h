#pragma once

class CCitadel_Modifier_BreakableMeleeShieldVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_flStunDuration; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strShieldBreakEffect; // offset 0x798, size 0xE0, align 8
    CSoundEventName m_ShieldBreakSound; // offset 0x878, size 0x10, align 8
};
