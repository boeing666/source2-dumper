#pragma once

class CCitadel_Ability_Baba_BenchRun_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flMaxChargeJumpDuration; // offset 0x13E8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_13EC[0x4]; // offset 0x13EC
    CEmbeddedSubclass< CCitadelModifier > m_BenchRunModifier; // offset 0x13F0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1400, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargedJumpParticle; // offset 0x14E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargingJumpParticle; // offset 0x15C0, size 0xE0, align 8
    float32 m_flChargeJumpAnimSpeedScale; // offset 0x16A0, size 0x4, align 4
    char _pad_16A4[0x4]; // offset 0x16A4
    CSoundEventName m_strChargingLoopSound; // offset 0x16A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChargingStartSound; // offset 0x16B8, size 0x10, align 8
    CSoundEventName m_strChargedJumpSound; // offset 0x16C8, size 0x10, align 8
    CSoundEventName m_strFullyChargedSound; // offset 0x16D8, size 0x10, align 8
};
