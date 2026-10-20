#pragma once

class CCitadel_Ability_VampireBat_StealLifeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1388, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastLifeLeechParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageTargetParticle; // offset 0x1240, size 0xE0, align 8
    CSoundEventName m_strSlashSound; // offset 0x1320, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x1330, size 0x10, align 8
    CSoundEventName m_strKillConfirmSound; // offset 0x1340, size 0x10, align 8
    CSoundEventName m_strFloatStartSound; // offset 0x1350, size 0x10, align 8
    CSoundEventName m_strFloatLoopSound; // offset 0x1360, size 0x10, align 8
    CSoundEventName m_strFloatEndSound; // offset 0x1370, size 0x10, align 8
    bool m_bAllowFloating; // offset 0x1380, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1381[0x7]; // offset 0x1381
};
