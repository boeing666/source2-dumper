#pragma once

class CCitadel_Modifier_PatronsBlessingEnemyTrackerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ProcNotificationModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealParticle; // offset 0x7A0, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strHealSound; // offset 0x880, size 0x10, align 8 | MPropertyGroupName
};
