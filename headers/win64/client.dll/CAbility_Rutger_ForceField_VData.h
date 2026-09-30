#pragma once

class CAbility_Rutger_ForceField_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14E0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_VictimPushModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x13C0, size 0x10, align 8
    CSoundEventName m_strDomeCreated; // offset 0x13D0, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strChargeUpSound; // offset 0x13E0, size 0x10, align 8
    CSoundEventName m_strPushAndDamage; // offset 0x13F0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChronoSphereChargeParticle; // offset 0x1400, size 0xE0, align 8 | MPropertyStartGroup
};
