#pragma once

class CCitadel_Modifier_NeutralSelfAoEVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x11B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10B8]; // offset 0x0
    float32 m_flRadius; // offset 0x10B8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHeight; // offset 0x10BC, size 0x4, align 4
    float32 m_flDPS; // offset 0x10C0, size 0x4, align 4
    float32 m_flTickRate; // offset 0x10C4, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x10C8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strAttackHitSound; // offset 0x11A8, size 0x10, align 8 | MPropertyStartGroup
};
