#pragma once

class CCitadel_Modifier_BreakableMeleeShieldVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    float32 m_flStunDuration; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strShieldBreakEffect; // offset 0x7A0, size 0xE0, align 8
    CSoundEventName m_ShieldBreakSound; // offset 0x880, size 0x10, align 8
};
