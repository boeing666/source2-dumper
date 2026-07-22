#pragma once

class CAbility_Drifter_BloodBlast_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AF8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1828, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaParticle; // offset 0x1838, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x1918, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetDamageParticle; // offset 0x19F8, size 0xE0, align 8
    CSoundEventName m_strHitConfirmSound; // offset 0x1AD8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strPointBlankSweetenerSound; // offset 0x1AE8, size 0x10, align 8
};
