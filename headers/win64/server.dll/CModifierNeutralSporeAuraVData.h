#pragma once

class CModifierNeutralSporeAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7B8]; // offset 0x0
    float32 m_flExplodeDamage; // offset 0x7B8, size 0x4, align 4
    float32 m_flArmTime; // offset 0x7BC, size 0x4, align 4
    float32 m_flDetonateTime; // offset 0x7C0, size 0x4, align 4
    char _pad_07C4[0x4]; // offset 0x7C4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x7C8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0x8A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ArmSound; // offset 0x8B8, size 0x10, align 8
    CSoundEventName m_DetonateActivatedSound; // offset 0x8C8, size 0x10, align 8
};
