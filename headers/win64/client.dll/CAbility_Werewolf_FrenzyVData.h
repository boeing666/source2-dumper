#pragma once

class CAbility_Werewolf_FrenzyVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1670, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x1490, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetDamageParticle; // offset 0x1570, size 0xE0, align 8
    CSoundEventName m_strHitConfirmSound; // offset 0x1650, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPointBlankSweetenerSound; // offset 0x1660, size 0x10, align 8
};
