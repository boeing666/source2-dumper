#pragma once

class CModifierNeutralSporeAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x908, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    float32 m_flExplodeDamage; // offset 0x7E8, size 0x4, align 4
    float32 m_flArmTime; // offset 0x7EC, size 0x4, align 4
    float32 m_flDetonateTime; // offset 0x7F0, size 0x4, align 4
    char _pad_07F4[0x4]; // offset 0x7F4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x7F8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0x8D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ArmSound; // offset 0x8E8, size 0x10, align 8
    CSoundEventName m_DetonateActivatedSound; // offset 0x8F8, size 0x10, align 8
};
