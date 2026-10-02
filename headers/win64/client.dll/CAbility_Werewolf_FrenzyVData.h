#pragma once

class CAbility_Werewolf_FrenzyVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x14D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetDamageParticle; // offset 0x15B8, size 0xE0, align 8
    CSoundEventName m_strHitConfirmSound; // offset 0x1698, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPointBlankSweetenerSound; // offset 0x16A8, size 0x10, align 8
};
