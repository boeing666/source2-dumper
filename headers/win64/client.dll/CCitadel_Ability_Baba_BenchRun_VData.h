#pragma once

class CCitadel_Ability_Baba_BenchRun_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1700, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flMaxChargeJumpDuration; // offset 0x13E8, size 0x4, align 4 | MPropertyStartGroup
    Vector m_WeaponOffsetStand; // offset 0x13EC, size 0xC, align 4
    Vector m_WeaponOffsetCrouch; // offset 0x13F8, size 0xC, align 4
    char _pad_1404[0x4]; // offset 0x1404
    CEmbeddedSubclass< CCitadelModifier > m_BenchRunModifier; // offset 0x1408, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargedJumpParticle; // offset 0x14F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargingJumpParticle; // offset 0x15D8, size 0xE0, align 8
    float32 m_flChargeJumpAnimSpeedScale; // offset 0x16B8, size 0x4, align 4
    char _pad_16BC[0x4]; // offset 0x16BC
    CSoundEventName m_strChargingLoopSound; // offset 0x16C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChargingStartSound; // offset 0x16D0, size 0x10, align 8
    CSoundEventName m_strChargedJumpSound; // offset 0x16E0, size 0x10, align 8
    CSoundEventName m_strFullyChargedSound; // offset 0x16F0, size 0x10, align 8
};
