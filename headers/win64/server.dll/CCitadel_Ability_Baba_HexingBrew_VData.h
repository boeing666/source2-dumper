#pragma once

class CCitadel_Ability_Baba_HexingBrew_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1878, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_NoneModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_FireModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BarrierModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x1418, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_FailModifier; // offset 0x1428, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_HoldingModifier; // offset 0x1438, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DetonateFireParticle; // offset 0x1448, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DetonateBarrierParticle; // offset 0x1528, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DetonateSilenceParticle; // offset 0x1608, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FuseParticle; // offset 0x16E8, size 0xE0, align 8
    Color m_FuseNoColor; // offset 0x17C8, size 0x4, align 4
    Color m_FuseFireColor; // offset 0x17CC, size 0x4, align 4
    Color m_FuseBarrierColor; // offset 0x17D0, size 0x4, align 4
    char _pad_17D4[0x4]; // offset 0x17D4
    CSoundEventName m_strBrewLockSound; // offset 0x17D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBrewUnlockSound; // offset 0x17E8, size 0x10, align 8
    CSoundEventName m_DetonateSound; // offset 0x17F8, size 0x10, align 8
    CSoundEventName m_strBrewChangeDefaultSound; // offset 0x1808, size 0x10, align 8
    CSoundEventName m_strBrewChangeBarrierSound; // offset 0x1818, size 0x10, align 8
    CSoundEventName m_strBrewChangeFireSound; // offset 0x1828, size 0x10, align 8
    CSoundEventName m_strBrewChangeSilenceSound; // offset 0x1838, size 0x10, align 8
    CSoundEventName m_strBarrierAppliedSound; // offset 0x1848, size 0x10, align 8
    CSoundEventName m_strBurnAppliedSound; // offset 0x1858, size 0x10, align 8
    CSoundEventName m_strSilenceAppliedSound; // offset 0x1868, size 0x10, align 8
};
