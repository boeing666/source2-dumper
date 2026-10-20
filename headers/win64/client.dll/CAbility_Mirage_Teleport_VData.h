#pragma once

class CAbility_Mirage_Teleport_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1368, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_InterruptNotificationModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1080, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_preTeleportParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // offset 0x1170, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // offset 0x1250, size 0xE0, align 8
    CSoundEventName m_strArriveSound; // offset 0x1330, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDepartSound; // offset 0x1340, size 0x10, align 8
    CSoundEventName m_strChannelDestinationSound; // offset 0x1350, size 0x10, align 8
    float32 m_flObjectiveOffset; // offset 0x1360, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1364[0x4]; // offset 0x1364
};
