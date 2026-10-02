#pragma once

class CAbility_Rutger_ForceField_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1528, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_VictimPushModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x1408, size 0x10, align 8
    CSoundEventName m_strDomeCreated; // offset 0x1418, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strChargeUpSound; // offset 0x1428, size 0x10, align 8
    CSoundEventName m_strPushAndDamage; // offset 0x1438, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChronoSphereChargeParticle; // offset 0x1448, size 0xE0, align 8 | MPropertyStartGroup
};
