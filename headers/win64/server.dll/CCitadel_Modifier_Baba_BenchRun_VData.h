#pragma once

class CCitadel_Modifier_Baba_BenchRun_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CSoundEventName m_strLightKickSound; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHeavyKickSound; // offset 0x7A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HeavyKickSlowModifier; // offset 0x7B0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GroundPoundFallModifier; // offset 0x7C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LightKickShoveModifier; // offset 0x7D0, size 0x10, align 8
    float32 m_flUpwardsForceOnHeavyMeleeStart; // offset 0x7E0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_07E4[0x4]; // offset 0x7E4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BenchRunEndParticle; // offset 0x7E8, size 0xE0, align 8 | MPropertyStartGroup
};
