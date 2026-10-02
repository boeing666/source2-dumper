#pragma once

class CCitadel_Modifier_NeutralSelfAoEVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x11E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10E8]; // offset 0x0
    float32 m_flRadius; // offset 0x10E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHeight; // offset 0x10EC, size 0x4, align 4
    float32 m_flDPS; // offset 0x10F0, size 0x4, align 4
    float32 m_flTickRate; // offset 0x10F4, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x10F8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strAttackHitSound; // offset 0x11D8, size 0x10, align 8 | MPropertyStartGroup
};
