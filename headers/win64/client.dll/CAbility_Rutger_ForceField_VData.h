#pragma once

class CAbility_Rutger_ForceField_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1958, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_VictimPushModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x1838, size 0x10, align 8
    CSoundEventName m_strDomeCreated; // offset 0x1848, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strChargeUpSound; // offset 0x1858, size 0x10, align 8
    CSoundEventName m_strPushAndDamage; // offset 0x1868, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChronoSphereChargeParticle; // offset 0x1878, size 0xE0, align 8 | MPropertyStartGroup
};
