#pragma once

class CAbility_Werewolf_FrenzyVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1340, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetDamageParticle; // offset 0x1240, size 0xE0, align 8
    CSoundEventName m_strHitConfirmSound; // offset 0x1320, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPointBlankSweetenerSound; // offset 0x1330, size 0x10, align 8
};
