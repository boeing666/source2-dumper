#pragma once

class CCitadel_Ability_Baba_HexingBrew_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1500, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_NoneModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FireModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BarrierModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FailModifier; // offset 0x10B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HoldingModifier; // offset 0x10C0, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DetonateFireParticle; // offset 0x10D0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DetonateBarrierParticle; // offset 0x11B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DetonateSilenceParticle; // offset 0x1290, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FuseParticle; // offset 0x1370, size 0xE0, align 8
    Color m_FuseNoColor; // offset 0x1450, size 0x4, align 4
    Color m_FuseFireColor; // offset 0x1454, size 0x4, align 4
    Color m_FuseBarrierColor; // offset 0x1458, size 0x4, align 4
    char _pad_145C[0x4]; // offset 0x145C
    CSoundEventName m_strBrewLockSound; // offset 0x1460, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBrewUnlockSound; // offset 0x1470, size 0x10, align 8
    CSoundEventName m_DetonateSound; // offset 0x1480, size 0x10, align 8
    CSoundEventName m_strBrewChangeDefaultSound; // offset 0x1490, size 0x10, align 8
    CSoundEventName m_strBrewChangeBarrierSound; // offset 0x14A0, size 0x10, align 8
    CSoundEventName m_strBrewChangeFireSound; // offset 0x14B0, size 0x10, align 8
    CSoundEventName m_strBrewChangeSilenceSound; // offset 0x14C0, size 0x10, align 8
    CSoundEventName m_strBarrierAppliedSound; // offset 0x14D0, size 0x10, align 8
    CSoundEventName m_strBurnAppliedSound; // offset 0x14E0, size 0x10, align 8
    CSoundEventName m_strSilenceAppliedSound; // offset 0x14F0, size 0x10, align 8
};
